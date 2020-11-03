#ifndef _GRID_H
#define _GRID_H
#include<iostream>
#include<string>

using namespace std;

class grid
{
  private:
    int space [8][8];
    int gsize;

  public:
    grid();
    void printGrid();
    int size();
    string getPlanet(int pguess);
    int getSpot(int r, int c);
};


#endif