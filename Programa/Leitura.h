#ifndef LEITURA_H
#define LEITURA_H
#include <vector>
#include <string>
#include "FiguraGeometrica.h"

class Leitura
{
    public:
        Leitura();

        vector<FiguraGeometrica*> parse(string filename);
        int getDx();
        int getDy();
        int getDz();

    protected:
        int dx,dy,dz;
        float r,g,b,a;
    private:
};

#endif // LEITURA_H
