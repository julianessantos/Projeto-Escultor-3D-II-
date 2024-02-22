#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "Sculptor.h"
#include "Leitura.h"


using namespace std;

int main()
{
   Sculptor *objeto;
    Leitura parser;
    vector<FiguraGeometrica*> figuras;

    figuras = parser.parse("sculptor.txt");

    objeto = new Sculptor(parser.getDx(), parser.getDy(), parser.getDz());

    for(size_t i = 0; i < figuras.size(); i++){
        figuras[i] -> draw(*objeto);
    }

    objeto -> writeOFF((char*)"objeto.off");

    for(size_t i = 0; i < figuras.size(); i++){
        delete figuras[i];
    }

    delete objeto;
    return 0;

}
