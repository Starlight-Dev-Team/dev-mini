QT += \
    core \
    gui \
    widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += \
    main.cc

HEADERS += \
    ui/mainwindow.h \
    ui/mainwindow.cc \
    ui/translator.h \
    ui/translator.cc

TRANSLATIONS += \
    i18n/zh_CN.ts
CONFIG += \
    lrelease \
    embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
