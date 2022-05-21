/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>

using namespace std;

class Illness
{
protected:float death, total_population;
	int Mortality_Rate;
public:
	void get_deathrate()
	{
		cin >> death >> total_population;
	}
	
	virtual int GetMortalityRate() = 0;
};

class Virus :public Illness
{ 
	
public:

	int GetMortalityRate()
	{
		Mortality_Rate = death / total_population * 100;

		return Mortality_Rate;
	}
};

class CovidVirus :public Illness
{
	
public:
	int GetMortalityRate()
	{
		Mortality_Rate = death/ total_population * 100;

		return Mortality_Rate;
	}
};

class HivVirus :public Illness
{

public:
	int GetMortalityRate()
	{
		Mortality_Rate = death / total_population * 100;

		return Mortality_Rate;
	}
};

class BirdFlue :public Illness
{
	
public:
	int GetMortalityRate()
	{
		Mortality_Rate = death / total_population * 100;

		return Mortality_Rate;
	}
};

int main()
{
	Virus v1;
	cout<<" Enter total no. of death occured due to virus and total population infected \n";
	v1.get_deathrate();
	cout<< "\n The mortality rate of several virus infections is\n" << v1.GetMortalityRate();

	CovidVirus v2;
	cout << " \n Enter total no. of death occured due to corona virus and total population infected\n";
	v2.get_deathrate();
	cout << "\n The mortality rate of covid virus infections is\n" << v2.GetMortalityRate();

	HivVirus v3;
	cout << " \n Enter total no. of death occured HivVirus and total population infected \n";
	v3.get_deathrate();
	cout << "\n The mortality rate of hiv virus infections is\n" << v3.GetMortalityRate();

	BirdFlue v4;
	cout << "\n Enter total no. of death occured due to BirdFlue virus and total population infected \n";
	v4.get_deathrate();
	cout << "\n The mortality rate of bird flue  infections is\n" << v4.GetMortalityRate();

}
