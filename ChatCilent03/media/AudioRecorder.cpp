#include "AudioRecorder.h"
#include <QLayout>
#include <QDebug>
#include <QTimer>
#include <QFileDialog>
#include <QMessageBox>
#include "myapp.h"

#define BufferSize 14096


typedef struct
{
    char RIFFNAME[4];
    unsigned long nRIFFLength;
    char WAVNAME[4];
    char FMTNAME[4];
    unsigned long nFMTLength;
    unsigned short nAudioFormat;
    unsigned short nChannleNumber;
    unsigned long nSampleRate;
    unsigned long nBytesPerSecond;
    unsigned short nBytesPerSample;
    unsigned short    nBitsPerSample;
    char    DATANAME[4];
    unsigned long   nDataLength;
}s_wav_head_t;

AudioRecorder::AudioRecorder(QWidget *parent)
    : QObject(parent)
    , mBuffer(BufferSize, 0)
{
    miMaxValue = 0;
    miVolume = 50;
    mpOutputFile = NULL;
    mpAudioInputFile = NULL;
    mpAudioOutputFile = NULL;

    mpAudioInputSound = NULL;
    mpAudioOutputSound = NULL;

    mpInputDevSound = NULL;
    mpOutputDevSound = NULL;

    mpOutputFile = new QFile();
    mpOutputFile->setFileName(MyApp::m_strRecordPath + "record.raw");

    mFormatFile.setSampleRate(8000);
    mFormatFile.setChannelCount(1);
    mFormatFile.setSampleFormat(QAudioFormat::Int16);

    auto audioInputDevice = QMediaDevices::defaultAudioInput();
    auto audioOutputDevice = QMediaDevices::defaultAudioOutput();

    if (!audioInputDevice.isFormatSupported(mFormatFile)) {
        qWarning("Input default format not supported, trying to use nearest");
        mFormatFile = audioInputDevice.preferredFormat(); // 使用设备的首选格式
    }

    if (!audioOutputDevice.isFormatSupported(mFormatFile)) {
        qWarning() << "Output default format not supported, trying to use nearest";
        qWarning() << "Output does not support input format.";
        return;
    }

    if (mFormatFile.sampleFormat() != QAudioFormat::Int16) {
        qWarning("Audio device doesn't support 16 bit samples, supports %d bit samples instead. Example cannot run", static_cast<int>(mFormatFile.sampleFormat()));
        mpAudioInputFile = nullptr;
        return;
    }

    mpAudioInputFile = NULL;
    mpAudioOutputFile = NULL;


    InitMonitor();

    m_timer = new QTimer(this);
    connect(m_timer, SIGNAL(timeout()), this, SLOT(sltStopRecord()));
}

AudioRecorder::~AudioRecorder()
{

}

/**
 * @brief AudioRecorder::startRecord
 * 开始录音
 * @param strFileName 录音保存文件
 */
void AudioRecorder::startRecord(QString strFileName)
{

}

void AudioRecorder::OnRecordPlay()
{

}

void AudioRecorder::sltStopRecord()
{


}

void AudioRecorder::saveRecordToFile(QString filename)
{
    if(filename.length() == 0) {
        QMessageBox::information(NULL, tr("filename"), tr("You didn't select any files."));
    }
    else {
        if (AddWavHeader((filename).toLatin1().data())>0)
        {
        }
    }
}

void AudioRecorder::OnStateChange(QAudio::State state)
{
    if(state == QAudio::IdleState)
        sltStopRecord();
}

int AudioRecorder::AddWavHeader(char *filename)
{
    // 开始准备WAV的文件头
    s_wav_head_t wav_head_t;
    wav_head_t.RIFFNAME[0] = 'R';
    wav_head_t.RIFFNAME[1] = 'I';
    wav_head_t.RIFFNAME[2] = 'F';
    wav_head_t.RIFFNAME[3] = 'F';

    wav_head_t.WAVNAME[0] = 'W';
    wav_head_t.WAVNAME[1] = 'A';
    wav_head_t.WAVNAME[2] = 'V';
    wav_head_t.WAVNAME[3] = 'E';

    wav_head_t.FMTNAME[0] = 'f';
    wav_head_t.FMTNAME[1] = 'm';
    wav_head_t.FMTNAME[2] = 't';
    wav_head_t.FMTNAME[3] = 0x20;
    wav_head_t.nFMTLength = 16;  //  表示 FMT 的长度
    wav_head_t.nAudioFormat = 1; //这个表示a law PCM

    wav_head_t.DATANAME[0] = 'd';
    wav_head_t.DATANAME[1] = 'a';
    wav_head_t.DATANAME[2] = 't';
    wav_head_t.DATANAME[3] = 'a';
    wav_head_t.nBitsPerSample = 16;
    wav_head_t.nBytesPerSample = 2;    //
    wav_head_t.nSampleRate = 8000;    //
    wav_head_t.nBytesPerSecond = 16000;
    wav_head_t.nChannleNumber = 1;

    int nFileLen = 0;
    int nSize = sizeof(wav_head_t);

    FILE *fp_s = NULL;
    FILE *fp_d = NULL;

    QString strRawFile = MyApp::m_strRecordPath + "record.raw";
    fp_s = fopen(strRawFile.toLatin1().data(), "rb");
    if (fp_s == NULL)
        return -1;

    fp_d = fopen(filename, "wb+");
    if (fp_d == NULL)
        return -2;


    int nWrite = fwrite(&wav_head_t, 1, nSize, fp_d);
    if (nWrite != nSize)
    {
        fclose(fp_s);
        fclose(fp_d);
        return -3;
    }

    while( !feof(fp_s))
    {
        char readBuf[4096];
        int nRead = fread(readBuf, 1, 4096, fp_s);
        if (nRead > 0)
        {
            fwrite(readBuf, 1, nRead, fp_d);
        }

        nFileLen += nRead;
    }
    fseek(fp_d, 0L, SEEK_SET);

    wav_head_t.nRIFFLength = nFileLen - 8 + nSize;
    wav_head_t.nDataLength = nFileLen;
    nWrite = fwrite(&wav_head_t, 1, nSize, fp_d);
    if (nWrite != nSize)
    {
        fclose(fp_s);
        fclose(fp_d);
        return -4;
    }

    fclose(fp_s);
    fclose(fp_d);

    Q_EMIT signalFinished();
    return nFileLen;
}

// 初始化混音器
void AudioRecorder::InitMonitor()
{
}

void AudioRecorder::CreateAudioInput()
{  
}

void AudioRecorder::CreateAudioOutput()
{
}

int AudioRecorder::ApplyVolumeToSample(short iSample)
{
    //Calculate volume, Volume limited to  max 30000 and min -30000
    return std::max(std::min(((iSample * miVolume) / 50) ,30000), -30000);
}

void AudioRecorder::OnSliderValueChanged(int value)
{
    miVolume = value;
}

void AudioRecorder::OnReadMore()
{

}

void AudioRecorder::OnTimeOut()
{

}
