#include <iostream>
#include "nowaGra.h"
#include "nowaGraPlus.h"
using namespace std;


int main()
{
    nowaGra* g1 = new nowaGraPlus; // polimorfizm i dynamiczne wiązanie wszystko tworzone dynamicznie w mainie.
    g1->start();
    delete g1;

    return 0;
}










