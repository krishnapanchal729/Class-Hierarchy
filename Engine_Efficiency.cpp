/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Engine
{
public:double m, n;
  void get_data ()
  {
    cin >> m >> n;
  }
};

class InternalEngine:public Engine
{
public:
  virtual void GetEfficiency () = 0;
};

class PetrolEngine:public InternalEngine
{
public:
  void GetEfficiency ()
  {
    cout << "Efficiency of Petrol Engine: " << m / n << endl;
  }
};

class DeiselEngine:public InternalEngine
{
public:
  void GetEfficiency ()
  {
    cout << "Efficiency of Deisel Engine: " << m / n << endl;
  }
};

class ExternalEngine:public Engine
{
public:
  virtual void GetEfficiency () = 0;
};

class SteamEngine:public ExternalEngine
{
public:
  void GetEfficiency ()
  {
    cout << "Efficiency of Steam Engine: " << m / n << endl;
  }
};

int main ()
{
  PetrolEngine p;
  InternalEngine *ip = &p;
  cout << "Enter the values of Petrol Engine: " << endl;
  ip->get_data ();
  ip->GetEfficiency ();

  DeiselEngine d;
  InternalEngine *id = &d;
  cout << "Enter the values of Diesel Engine: " << endl;
  id->get_data ();
  id->GetEfficiency ();

  SteamEngine s;
  ExternalEngine *es = &s;
  cout << "Enter the values of Steam Engine" << endl;
  es->get_data ();
  es->GetEfficiency ();
}
