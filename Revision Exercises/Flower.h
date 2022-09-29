#pragma once
#include <iostream>
#include <string>
using namespace std;
class Flower
{
	string name;
	int numberOfPetals;
	float price;
public:
	Flower(string name = "flower", int numPetals = 1, float price = 0.01);
	string getName() const;
	int getNumberOfPetals() const;
	float getPrice() const;

	void setName(string name);
	void setNumberOfPetals(int n);
	void setPrice(float f);

	friend ostream& operator<<(ostream& out, const Flower& flower);
	Flower operator+(float prIncrease);
	Flower operator++(); // pre increment
	Flower operator++(int u); // posst


};

