#include "KolkoKrzyzyk.h"
#include <iostream>
using namespace std;
void KolkoKrzyzyk::Druk()
{
        for (int i = 0; i < 9; i++)
        {
            if (i == 1 || i == 2 || i == 4 || i == 5 || i == 7 || i == 8)
            {
                cout << " | ";
            }
            cout << tab[i];
            if (i == 2 || i == 5)
            {
                cout << endl;
                cout << "---------" << endl;
            }
        }
        cout << endl;
}
int KolkoKrzyzyk::Ruch(int index, char ruch)
{
    if (index >= 0 && index < 9)
    {
        if (tab[index] == ' ')
        {
            tab[index] = ruch;
            return 1;
        }
    }
    return 0;
}
int KolkoKrzyzyk::ktoWygrywa(char move)
{
    if (
        // sprawdza poziomo
        (tab[0] == move && tab[1] == move && tab[2] == move) ||
        (tab[3] == move && tab[4] == move && tab[5] == move) ||
        (tab[6] == move && tab[7] == move && tab[8] == move) ||
        // Sprawdza pionowo
        (tab[0] == move && tab[3] == move && tab[6] == move) ||
        (tab[1] == move && tab[4] == move && tab[7] == move) ||
        (tab[2] == move && tab[5] == move && tab[8] == move) ||
        // Sprawdza po przek¹tnej
        (tab[0] == move && tab[4] == move && tab[8] == move) ||
        (tab[2] == move && tab[4] == move && tab[6] == move))
    {
        return 1;
    }
    else
    {
        bool remis = true;
        for (int i = 0; i < 9; i++)
        {
            if (tab[i] == ' ')
            {
                remis = false;
                break;
            }
        }
        if (remis == true)
        {
            return 2;
        }
    }
    return 0;
}


