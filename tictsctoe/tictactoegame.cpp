#include "tictactoegame.h"
#include "ui_tictactoegame.h"
#include <QMessageBox>

TicTacToegame::TicTacToegame(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TicTacToegame)
{
    ui->setupUi(this);
}

TicTacToegame::~TicTacToegame()
{
    delete ui;
}

int TicTacToegame::playerTurn(int buttonIndex)
{
if (clickedButton[buttonIndex] == 0)
{
counter++;
int modulus = counter % 2;
if (modulus == 1)
{
ui->label_2->setText("Player 2");
clickedButton[buttonIndex] = 1;
return 1;
}
else
{
ui->label_2->setText("Player 1");
clickedButton[buttonIndex] = 2;
return 2;
}
}
return 0;
}

void TicTacToegame::on_pushButton_4_clicked()
{
    int player = playerTurn(3);
    if (player == 1)
    {
    ui->pushButton_4->setText("X");
    }
    else if (player == 2)
    ui->pushButton_4->setText("O");
    checkifwin();
}

void TicTacToegame::on_pushButton_1_clicked()
{
    int player = playerTurn(0);
    if (player == 1)
    {
    ui->pushButton_1->setText("X");
    }
    else if (player == 2)
    ui->pushButton_1->setText("O");
    checkifwin();
}

void TicTacToegame::on_pushButton_7_clicked()
{
    int player = playerTurn(6);
    if (player == 1)
    {
    ui->pushButton_7->setText("X");
    }
    else if (player == 2)
    ui->pushButton_7->setText("O");
    checkifwin();
}

void TicTacToegame::on_pushButton_5_clicked()
{
    int player = playerTurn(4);
    if (player == 1)
    {
    ui->pushButton_5->setText("X");
    }
    else if (player == 2)
    ui->pushButton_5->setText("O");
    checkifwin();
}

void TicTacToegame::on_pushButton_3_clicked()
{
    int player = playerTurn(2);
    if (player == 1)
    {
    ui->pushButton_3->setText("X");
    }
    else if (player == 2)
    ui->pushButton_3->setText("O");
    checkifwin();
}

void TicTacToegame::on_pushButton_8_clicked()
{
    int player = playerTurn(7);
    if (player == 1)
    {
    ui->pushButton_8->setText("X");
    }
    else if (player == 2)
    ui->pushButton_8->setText("O");
    checkifwin();
}

void TicTacToegame::on_pushButton_6_clicked()
{
    int player = playerTurn(5);
    if (player == 1)
    {
    ui->pushButton_6->setText("X");
    }
    else if (player == 2)
    ui->pushButton_6->setText("O");
    checkifwin();
}

void TicTacToegame::on_pushButton_2_clicked()
{
    int player = playerTurn(1);
    if (player == 1)
    {
    ui->pushButton_2->setText("X");
    }
    else if (player == 2)
    ui->pushButton_2->setText("O");
    checkifwin();
}

void TicTacToegame::on_pushButton_9_clicked()
{
    int player = playerTurn(8);
    if (player == 1)
    {
    ui->pushButton_9->setText("X");
    }
    else if (player == 2)
    ui->pushButton_9->setText("O");
    checkifwin();
}
void TicTacToegame::checkifwin()//int wincombs[8][3] = { {0,1,2}, {0,3,6},{6,7,8},{2,5,8}, {0,4,8}, {2,4,6}, {1,4,7},{3,4,5} }
{
    QMessageBox msgBox;
    for(int i = 0; i <8;i++)
    {
        if(clickedButton[wincombs[i][0]] == clickedButton[wincombs[i][1]] && clickedButton[wincombs[i][0]] == clickedButton[wincombs[i][2]] && clickedButton[wincombs[i][0]] == 2)
        {
            ui->label_2->setText("Game Ended");
            ui->label_3->setText("Player 2 is the Winner!");
            msgBox.setText("Player 2 is the Winner!");
            msgBox.exec();
            QApplication::quit();
        }
        else if(clickedButton[wincombs[i][0]] == clickedButton[wincombs[i][1]] && clickedButton[wincombs[i][0]] == clickedButton[wincombs[i][2]] && clickedButton[wincombs[i][0]] == 1)
        {
            ui->label_2->setText("Game Ended");
            ui->label_3->setText("Player 1 is the Winner!");
            msgBox.setText("Player 1 is the Winner!");
            msgBox.exec();
            QApplication::quit();
        }
        else if(clickedButton[0] != 0 && clickedButton[1] != 0 && clickedButton[2] != 0 && clickedButton[3] != 0 && clickedButton[4] != 0 && clickedButton[5] != 0 && clickedButton[6] != 0 && clickedButton[7] != 0 && clickedButton[8] != 0)
        {
            msgBox.setText("None of the Players won, TIE!");
            msgBox.exec();
            QApplication::quit();
        }
    }
}
