#include "proprietaireinterface.h"
#include <string>

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ProprietaireInterface w;
    w.show();
    return a.exec();
}
