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
    string message;

  public:
    grid();
    void printGrid();
    int size();
    void getPlanet(int pguess);
    int getSpot(int r, int c);
};


#endif