#include "Flower.h"

Flower::Flower(string name, int numPetals, float price)
{
	this->name = name;
	this->numberOfPetals = numPetals;
	this->price = price;
}
string Flower::getName() const
{
	return name;
}
int Flower::getNumberOfPetals() const
{
	return numberOfPetals;
}
float Flower::getPrice() const
{
	return price;
}
void Flower::setName(string name)
{
	this->name = name;
}
void Flower::setNumberOfPetals(int n)
{
	this->numberOfPetals = n;
}
void Flower::setPrice(float f)
{
	this->price = f;
}
Flower Flower::operator+(float prIncrease)
{
	Flower f(this->name, this->numberOfPetals, this->price+prIncrease);
	return f;
}
ostream& operator<<(ostream& out, const Flower& flower)
{
	out << flower.name << "(" << flower.price << ") "
		<< flower.getNumberOfPetals() << " Petals" << endl;
	return out;
}

Flower Flower::operator++()
{
	this->numberOfPetals = this->numberOfPetals + 1;
	return *this;
}
Flower Flower::operator++(int u)
{
	Flower f(*this);
	this->numberOfPetals = this->numberOfPetals+1;
	return f;
}