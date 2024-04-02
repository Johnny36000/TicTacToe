#include "tictactoegame.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TicTacToegame w;
    w.show();
    return a.exec();
}
