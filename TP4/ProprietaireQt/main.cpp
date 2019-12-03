#include "proprietaireqt.h"

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ProprietaireQt w;
    w.show();
    return a.exec();
}
