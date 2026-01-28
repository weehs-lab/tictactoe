#pragma once
#include <iostream>
using namespace std;

class TicTacToe
{
public:
    TicTacToe ();
    void DrawBoard () const;
    void SetPosition (int, int, bool);
    char GetWinner () const;
    char GetBoard (int, int) const;
private:
    char board [3][3];
};
