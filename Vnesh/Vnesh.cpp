#include <iostream>
#include <string>
#include"Header.h"
using namespace std;

Car::Car(
	string _marka,
	string _model,
	string _color,
	int _year,
	int _power,
	int _speed,
	int _price, 
	int _star)
{
	int mass[9] = { 1,2,3,4,5,6,7,8,9 };
	int st = 0;
	marka = _marka; model = _model; color = _color;
	if (_year>=1920 && _year <=2024)
	{year = _year;}
	else{year = 0;	}
	if (_power>=35 && _power <=650)
	{power = _power;}
	else{power = 0;	}
	if (_speed>=90 &&_speed<=260 )
	{speed = _speed;}
	else{speed = 0;}
	if (_price>=25000 && _price <= 2000000)
	{price = _price;}
	else{price = 0;}
	for (int i = 0; i < 9; i++)
	{ if (_star == mass[i])
		{ star = _star; break; }
		else
		{ star = 0; }
	}
}

Car::~Car()
{
	cout << " Car is deleted " << endl;
}
int main() 
{
	Car lada;
	lada.print();
	Car BMW ("BMW", "316I", "white", 2020, 202, 260, 500000, 18);
	BMW.print();

 
}