TEMPLATE = app
TARGET = ProprietaireQt
QT += core \
    gui
HEADERS += camionqt.h \
    promenadeqt.h \
    proprietaireqt.h
SOURCES += camionqt.cpp \
    promenadeqt.cpp \
    main.cpp \
    proprietaireqt.cpp
FORMS += camionqt.ui \
    promenadeqt.ui \
    proprietaireqt.ui
RESOURCES += 
LIBS += "../source/Debug/libsource.a"
INCLUDEPATH += "../source/."
