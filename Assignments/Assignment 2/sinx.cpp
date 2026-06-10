#include<iostream>
#include<cmath>
using namespace std;
int main(){
double xmin,xmax;
double x,y;
cout<<"Enter Minimum value: ";
cin>>xmin;
cout<<"Enter Maximum value: ";
cin>>xmax;

const int height=20;
const int width=80;

const double  ymin = -1.0;
const double ymax = 1.0;

char grid[height][width];
for(int i = 0;i<height;i++){
  for(int j = 0;j<width;j++){
    grid[i][j]=' ';
    }

  }

  for(int j=0; j<width;j++){
  grid[height/2][j] ='-';}

    for(int i = 0; i<height;i++){
       grid[i][width/2] = '|';
    }

  for(int j=0;j<width;j++){
    double grid_x=j;
    x= xmin + ((grid_x / (width - 1)) * (xmax - xmin));

    y=sin(x);

    double grid_y=(((y-ymin)/(ymax-ymin))*(height-1));
    int row=(int)grid_y;
    row=(height - 1)- row;

  if((row > 0) && (row < height))
    grid[row][j]='*';
   }



  
    for(int i =0;i<height; i++){
      for(int j=0;j<width;j++){
    cout<<grid[i][j];
    }
    cout<<endl;
    }



    return 0;
}
