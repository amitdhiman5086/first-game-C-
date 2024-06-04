#pragma once
#include<vector>
#include<raylib.h>
using namespace std ;


class Grid 
{
    private:
    int numRows ;
    int numCols;
    int  cellSize ;




    public:
        vector<Color> GetCellColors() ;
        Grid();
        void Initialize();
        void Print() ;
        void Draw() ;
        int grid[20][10];
        vector<Color> colors ;



};

