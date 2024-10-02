#include <iostream>
#include <cmath>

using namespace std;

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

int main() 
{
  double x1, x2, y1, y2;
  cout << "Please input the coordinate for the center of your cirle:" << endl;
  cin >> x1 >> y1;
  cout << "Please input any coordinate on the edge of your circle:" << endl;
  cin >> x2 >> y2;
  cout << "Based on the points: Center (" << x1 << "," << y1 << ") Edge (" << x2 << "," << y2 << ")" << endl;
  cout << "The radius is: " << calcRadius (x1, y1, x2, y2) << endl;
  cout << "The cirumference is: " << calcCircumference (x1, y1, x2, y2) <<endl;
  cout << "The area is: " << calcArea (x1, y1, x2, y2) << endl;
  return 0;
}