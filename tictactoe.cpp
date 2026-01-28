#include "tictactoe.h"

TicTacToe::TicTacToe ()
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            board [i][j] = ' ';
        }
    }
}

void TicTacToe::DrawBoard () const
{
    cout << "    0  1  2  X\n";
    for (int i = 0; i < 3; ++i)
    {
        cout << " " << i << " ";
        for (int j = 0; j < 3; ++j)
        {
            cout << '[' << board [i][j] << ']';
        }
        cout << "\n";
    }
    cout << " Y\n";
}

void TicTacToe::SetPosition (int x, int y, bool player)
{
    if (player == true)
        board [y][x] = 'X';
    else
        board [y][x] = 'O';
}

char TicTacToe::GetWinner () const
{
    for (int i = 0; i < 3; ++i)
    {
        if (board [i][0] == board [i][1] && board [i][1] == board [i][2] && board [i][0] != ' ')
            return board [i][0];
    }
    for (int j = 0; j < 3; ++j)
    {
        if (board [0][j] == board [1][j] && board [1][j] == board [2][j] && board [0][j] != ' ')
            return board [0][j];
    }
    if (board [0][0] == board [1][1] && board [1][1] == board [2][2] && board [0][0] != ' ')
        return board [0][0];
    if (board [0][2] == board [1][1] && board [1][1] == board [2][0] && board [1][1] != ' ')
        return board [1][1];
    for (int k = 0; k < 3; ++k)
    {
        for (int l = 0; l < 3; ++l)
        {
            if (board [k][l] == ' ')
                return 'P';
        }
    }
    return 'D';

}

char TicTacToe::GetBoard (int x, int y) const
{
    return board [y][x];
}
