#ifndef TICTACTOEGAME_H
#define TICTACTOEGAME_H

#include <QMainWindow>
#include <iostream>

QT_BEGIN_NAMESPACE
namespace Ui { class TicTacToegame; }
QT_END_NAMESPACE

class TicTacToegame : public QMainWindow
{
    Q_OBJECT

public:
    TicTacToegame(QWidget *parent = nullptr);
    ~TicTacToegame();
    int playerTurn(int buttonIndex);
private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void checkifwin();


private:
    Ui::TicTacToegame *ui;
    int counter =0;
    int clickedButton[9]= {0,0,0,0,0,0,0,0,0};
    int wincombs[8][3] = { {0,1,2}, {3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8}, {2,4,6}};
};
#endif // TICTACTOEGAME_H
