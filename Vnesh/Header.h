#pragma once
#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
class Car
{
public:
	Car
	(
	string _marka,
	string _model, 
	string _color,
	int _year,
	int _power,
	int _speed,
	int _price, 
	int _star);

	void print() 
	{
cout << left << setw(10) << marka << " " << left << setw(10)
<< model << " " << left << setw(10) << color << " "
<< left << setw(10) << year << " "<< left << setw(10) 
<< power << " " << left << setw(10) << speed<<" "
<< left << setw(5) <<price<< " " << left << setw(5) 
<< star<< endl; }
	Car()
	{

		marka = "lada";
		model = "kalina";
		color = "black";
		year = 2020;
		power = 180;
		speed = 180;
		price = 250000;
		star = 4;
		
	 

	}

	~Car();

private:
	string marka;
	string model;
	string color;
	int year;
	int power;
	int speed;
	int price;
	int star;
};