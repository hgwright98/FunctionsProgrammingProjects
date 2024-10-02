// I am grabbing the center point coordinate and any edge point coordinate the user wishes to input. The program will then take those inputs and run them throught the various functions below to output the Radius, Circumference, and the area of the circle based on the inputted points.
#include <iostream>
#include <cmath>

using namespace std;
// These are where I created the functions that I will be using in the program.
double calcDistance (double w, double x, double y, double z) 
{
  double Distance = sqrt(pow(y-w,2)+pow(z-x,2));
  return Distance;
}

double calcRadius (double w, double x, double y, double z)
{
  double Radius = calcDistance (w,x,y,z);
  return Radius;
}

double calcCircumference (double w, double x, double y, double z)
{
  double Circumference = calcRadius (w,x,y,z) * 2 * 3.1416;
  return Circumference;
}
double calcArea (double w, double x, double y, double z)
{
  double Area = 3.1416 * pow(calcRadius (w,x,y,z), 2);
  return Area;
}
// Here is where I will be calling the main function and calling all the functions I need
int main() 
{
  //I am establishing the varaibles that I will get from the user
  double x1, x2, y1, y2;
  //This is where I am grabbing the inputs
  cout << "Please input the coordinate for the center of your cirle:" << endl;
  cin >> x1 >> y1;
  cout << "Please input any coordinate on the edge of your circle:" << endl;
  cin >> x2 >> y2;
  //This is where I am calling the functions made above using the variables I took from the user
  cout << "Based on the points: Center (" << x1 << "," << y1 << ") Edge (" << x2 << "," << y2 << ")" << endl;
  cout << "The radius is: " << calcRadius (x1, y1, x2, y2) << endl;
  cout << "The cirumference is: " << calcCircumference (x1, y1, x2, y2) <<endl;
  cout << "The area is: " << calcArea (x1, y1, x2, y2) << endl;
  return 0;
}