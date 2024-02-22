#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "Sculptor.h"
#include "FiguraGeometrica.h"

class CutVoxel : public FiguraGeometrica 
{

    public:
        CutVoxel(int x_, int y_, int z_);
        ~CutVoxel(){}

        void draw(Sculptor &s);

    protected:
        int x,y,z;
    private:
};

#endif // CUTVOXEL_H
