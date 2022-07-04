QT += \
  core \
  gui \
  widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += \
  c++17 \
  lrelease \
  embed_translations

SOURCES += \
  main.cpp

HEADERS += \
  mini/app.hpp \
  mini/app.cpp \
  mini/map.hpp \
  mini/map.cpp \
  ui/mainwindow.hpp \
  ui/mainwindow.cpp \
  ui/translator.hpp \
  ui/translator.cpp \
  ui/workspace.hpp \
  ui/workspace.cpp \
  ui/icon.hpp \
  ui/icon.cpp \
  ui/dialog.hpp \
  ui/dialog.cpp

TRANSLATIONS += \
  i18n/zh-CN.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
  resource/icon.qrc