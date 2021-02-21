#ifndef AIC21_CLIENT_CPP_MAP_H
#define AIC21_CLIENT_CPP_MAP_H

#include "Models/Cell.h"
#include <vector>
using namespace std;


class Map {

    public:

    Map(vector<vector<Cell>> cells, int width, int height, int manhattanDistance, int currentX, int currentY);
    Cell* getCell(int dx, int dy, int distance);


    private:

    vector<vector<Cell*>> cells_;
    int width_;
    int height_;
    int manhattan_distance_;
    vector<vector<Cell*>> createCompressedCells(int midX, int midY);

};

#endif //AIC21_CLIENT_CPP_MAP_H