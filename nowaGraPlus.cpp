#include "nowaGraPlus.h"
#include <iostream>
using namespace std;

void nowaGraPlus::start()
{
	cout << "Witaj w grze uzytkowniku!" << endl;
    while (gra)
    {
        Druk();
        cout << "Twoj ruch " << czyja_kolej << " (wprowadŸ -1 zeby cofnac ruch)" << endl;
        cin >> wpisz;
        if (wpisz == -1) {
            cofnijRuch();
            continue;
        }
        historiaRuchu.push_back({ wpisz, czyja_kolej }); // przechowuje ruchy
        stan = ktoWygrywa(czyja_kolej);
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
    pokazStaty();
}

void nowaGraPlus::cofnijRuch()
{
    if (!historiaRuchu.empty()) {
        auto& last_move = historiaRuchu.back();
        historiaRuchu.pop_back();
        tab[last_move.first] = ' ';
        czyja_kolej = last_move.second;
        cout << "Cofnieto ostatni ruch." << endl;
    }
    else {
        cout << "Brak ruchow do cofniecia!" << endl;
    }
}

void nowaGraPlus::pokazStaty()
{
    cout << "Statystyki gry:" << endl;
    cout << "Wszytkie ruchy: " << historiaRuchu.size() << endl;
    cout << "Historia ruchów: " << endl;
    for (const auto& move : historiaRuchu) {
        cout << "Pozycja: " << move.first << ", Gracz: " << move.second << endl;
    }
    cout << "Dziekuje za gre!" << endl;
}
