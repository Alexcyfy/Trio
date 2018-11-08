#include <iostream>
using namespace std;

// <-- ADD YOUR FUNCTION PROTOTYPE HERE
void swap(int &, int &, int &);

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


  // <-- ADD YOUR FUNCTION CALL HERE
swap(red, green, blue);

  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

// <-- ADD YOUR FUNCTION DEFINITON HERE
void swap(int &red, int &green, int &blue)
{
/*vector <int> colorValues;
colorValues.push_back(red);
colorValues.push_back(green);
colorValues.push_back(blue);*/
int tempred = red;
int tempblue = blue;
int tempgreen = green;
if(red > green && green > blue)
{
red = tempred;
green = tempgreen;
blue = tempblue;
}
if(red > blue && blue > green)
{
red = tempred;
green = tempblue;
blue = tempgreen;
}
if(green > red && red > blue)
{
red = tempgreen;
green = tempred;
blue = tempblue;
}
if(green > blue && blue > red)
{
red = tempgreen;
green = tempblue;
blue = tempred;
}
if(blue > red && red > green)
{
red = tempblue;
green = tempred;
blue = tempgreen;
}
if(blue > green && green > red)
{
red = tempblue;
green = tempgreen;
blue = tempred;
}

 
  
}




