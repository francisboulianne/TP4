TEMPLATE = app
TARGET = ProprietaireQt
QT += core \
    gui
HEADERS += supprimervehiculeqt.h \
    camionqt.h \
    promenadeqt.h \
    proprietaireqt.h
SOURCES += supprimervehiculeqt.cpp \
    camionqt.cpp \
    promenadeqt.cpp \
    main.cpp \
    proprietaireqt.cpp
FORMS += supprimervehiculeqt.ui \
    camionqt.ui \
    promenadeqt.ui \
    proprietaireqt.ui
RESOURCES += 
LIBS += "../source/Debug/libsource.a"
INCLUDEPATH += "../source/."
