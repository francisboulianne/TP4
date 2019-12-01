TEMPLATE = app
TARGET = ProprietaireInterface 

QT        += core gui 

HEADERS   += proprietaireinterface.h
SOURCES   += main.cpp \
    proprietaireinterface.cpp
FORMS     += proprietaireinterface.ui    
RESOURCES +=
LIBS += "../source/Debug/libSource.a"
INCLUDEPATH += "../source/."