#include "nowaGra.h"
#include <iostream>
using namespace std;
void nowaGra::start()
{
    while (gra)
    {
        Druk();
        cout << "Twoj ruch " << czyja_kolej << endl;
        cin >> wpisz;
        
        if (Ruch(wpisz, czyja_kolej) == 0)
        {
            cout << "Miejsce zajete" << endl;
            continue;
        };
        stan = ktoWygrywa(czyja_kolej);
        if (stan == 1)
        {
            Druk();
            cout << czyja_kolej << " wygrywa gre!" << endl;
            break;
        }
        else if (stan == 2)
        {
            cout << "Remis!" << endl;
            break;
        };
        czyja_kolej = (czyja_kolej == 'X') ? 'O' : 'X';
    };
};
