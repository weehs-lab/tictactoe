#include <iostream>
using namespace std;

#include "tictactoe.h"

int main ()
{
    TicTacToe *board = new TicTacToe;
    bool player = true;
    int x = 0, y = 0;
    char status = 'P';
    board -> DrawBoard ();
    while (true)
    {
        if (player == true)
        {
            cout << "Player X position (x y): ";
            cin >> x >> y;
            if (board -> GetBoard (x, y) != ' ')
            {
                cerr << "Place is taken, please try again:\n";
                continue;
            }
            board -> SetPosition (x, y, player);
        }
        else
        {
            cout << "Player O position (x y): ";
            cin >> x >> y;
            if (board -> GetBoard (x, y) != ' ')
            {
                cerr << "Place is taken, please try again:\n";
                continue;
            }
            board -> SetPosition (x, y, player);
        }
        player = !player;
        board -> DrawBoard ();
        status = board -> GetWinner ();
        if (status == 'D' || status == 'X' || status == 'O')
            break;
    }
    switch (status)
    {
    case 'D':
        cout << "Draw\n";
        break;
    case 'X':
        cout << "Player X is the winner\n";
        break;
    case 'O':
        cout << "Player O is the winner\n";
        break;
    default:
        cerr << "Error\n";
        break;
    }

    return 0;
}
