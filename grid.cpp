#include "grid.h"
#include<iostream>


using namespace std;

grid::grid()
{
    srand(time(NULL));
    gsize=8;
    for(int r=0; r<8; r++)
    {
     for(int c=0; c<8; c++)
     {
     space[r][c]=0;
     }
    }
    int r=rand()%8;
    int c=rand()%8;
    for (int i=1; i<7; i++)  //this places my planets (1-6) in a random spot in the grid.
    {
      while (space[r][c]!=0)
      {
      r=rand()%8;
      c=rand()%8;
      }
      space[r][c]=i;
    }
    message = "";
}


void grid::printGrid()
{
  cout<<"    0   1   2   3   4   5   6   7"<<endl;  
  
  for(int r=0; r<size(); r++)
  {
    cout<<"  ---------------------------------"<<endl;
    cout<<r<<" ";
    for(int c=0; c<size(); c++)
    {
      cout<<"| ";
      if (space[r][c]==-1)
      {
        cout<<"X ";
      }
      else if (space[r][c]==-2)
      {
        cout<<"O ";
      }
      else 
      {
        cout<<"  ";
      }
     
      if (c==7)
      {
          cout<<"|";
      }
    }
    cout<<endl;
  }
}


int grid::size()
{
  return gsize;
}

void grid::getPlanet(int pguess) //i assign 1-6 for each planet.
{
  if (pguess == 1)
  {
    message = "You have discovered Earth! Location of the Time Stone.\n";
  }
  else if (pguess == 2)
  {
    message =  "You have discovered Xandar! Location of the Power Stone.\n";
  }
  else if (pguess == 3)
  {
    message =  "You have discovered Knowhere! Location of the Reality Stone.\n";
  }
  else if (pguess == 4)
  {
    message =  "You have discovered Ego! Location of the Space Stone.\n";
  }
  else if (pguess == 5)
  {
    message =  "You have discovered Sakaar! Location of the Mind Stone.\n";
  }
  else if (pguess == 6)
  {
    message =  "You have discovered Asgard! Location of the Soul Stone.\n";
  }
}

int grid::getSpot(int r, int c)
{
  int value;
  if (r >7 || c>7 || r<0 || c<0) //keeps game withing boundaries.
  {
    cout<<"This is out of the Marvel Universe. Stay within 0-7.\n";
    value = -3;
  }
  else
  {
    value = space[r][c];
    if (space[r][c]>0) 
    {
      space[r][c]= -1;
    }
    else if (space[r][c]==0)
    {
      space[r][c]= -2;
    }
  }
  return value;
}