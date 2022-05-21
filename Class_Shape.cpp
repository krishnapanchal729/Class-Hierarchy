/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<conio.h>
using namespace std;

class Shape
{
public:double x, y;
  void get_value ()
  {
    cin >> x >> y;
  }
  virtual void get_Area () = 0;
};

class Triangle:public Shape
{
public:void get_Area ()
  {
    cout << "Area of Trinagle is " << 0.5 * x * y << endl;
  }
};

class Rectangle:public Shape
{
public:void get_Area ()
  {
    cout << "Area of Rectangle is " << x * y << endl;
  }
};

int
main ()
{
  Triangle t;
  Shape *st = &t;
  cout << "Enter the value of base and height:";
  st->get_value ();
  st->get_Area ();

  Rectangle r;
  Shape *sr = &r;
  cout << "Enter the value of length and breadth:";
  sr->get_value ();
  sr->get_Area ();

  getch ();
  return 0;
}
