greaterThan(QT_MAJOR_VERSION, 4): QT += multimedia


HEADERS += \
    $$PWD/voice.h \
    $$PWD/test/testmedia.h \
    $$PWD/AudioRecorder.h

SOURCES += \
    $$PWD/voice.cpp \
    $$PWD/test/testmedia.cpp \
    $$PWD/AudioRecorder.cpp


# 包含路径
INCLUDEPATH += \
    $$PWD \
    $$PWD/test \
    $$PWD/voice/include \
    $$PWD/fmod/include


#INCLUDEPATH     += $$PWD
#INCLUDEPATH     += $$PWD/test

# 库文件路径和库文件名
#LIBS += \
    #-L$$PWD/voice/libs -lmsc \
    #-L$$PWD/fmod/libs -lfmodex



#INCLUDEPATH     += $$PWD/voice/include
#LIBS            += -L$$PWD/voice/libs -lmsc

#INCLUDEPATH     += $$PWD/fmod/include
#LIBS            += -L$$PWD/fmod/libs -lfmodex
#LIBS            += $$PWD/fmod/libs/libfmodex.a

#QMAKE_POST_LINK += $$quote(cmd /c copy /y .\media\voice\libs\msc.dll .\bin)
#QMAKE_POST_LINK += $$quote(cmd /c copy /y .\media\fmod\libs\fmodex.dll .\bin)
