QT += \
  core \
  gui \
  widgets

CONFIG += \
  c++17 \
  lrelease \
  embed_translations

SOURCES += \
  main.cpp

HEADERS += \
  mini/app.hpp \
  mini/app.cpp \
  mini/app \
  mini/map.hpp \
  mini/map.cpp \
  mini/map \
  ui/mainwindow.hpp \
  ui/mainwindow.cpp \
  ui/mainwindow \
  ui/translator.hpp \
  ui/translator.cpp \
  ui/translator \
  ui/workspace.hpp \
  ui/workspace.cpp \
  ui/workspace \
  ui/icon.hpp \
  ui/icon.cpp \
  ui/icon \
  ui/dialog.hpp \
  ui/dialog.cpp \
  ui/dialog

TRANSLATIONS += \
  i18n/zh-CN.ts

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
  resource/icon.qrc

# Please change this path to your Qt MinGW include path.
INCLUDEPATH += C:/Qt6/6.3.0/mingw_64/include/
