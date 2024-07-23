#pragma once
#include <iostream>
using namespace std;
class KolkoKrzyzyk
{
    protected:
        char tab[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
        char czyja_kolej = 'X';
        bool gra = true;
        int stan = 0;
        int wpisz;

    public:
       virtual void Druk();                     // 0 1 2   numeracja pól
        virtual int Ruch(int index, char ruch); // 3 4 5
        virtual int ktoWygrywa(char move);      // 6 7 8
        
};


