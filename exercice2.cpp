#include <iostream>
using namespace std;
class shape
{
protected:
  float x, y;
public:
  shape(float _x, float _y)
  {
    x = _x;
    y = _y;
  }
};
class Rectangle: public shape
{
public:
  Rectangle(float _x, float _y) : shape(_x, _y) {}

  float area()
  {
    return (x * y);
  }
};

class Triangle: public shape
{
public:
  Triangle(float _x, float _y) : shape(_x, _y) {}

  float area()
  {
    return (x * y / 2);
  }
};

int main (){

  Rectangle rectangle(2,3);
  Triangle triangle(2,3);
  cout << rectangle.area() << endl;   //6
  cout << triangle.area() << endl;    //3 
  return 0;
}

