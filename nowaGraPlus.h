#pragma once
#include "nowaGra.h"
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

class nowaGraPlus 
	:public nowaGra
{
private:
	vector <pair <int, char>> historiaRuchu;
public:
	void start() override;
	void cofnijRuch(); // Funkcja cofaj�ca ostatni ruch
	void pokazStaty(); // Funkcja pokazuj�ca staty ka�dego gracza
};

