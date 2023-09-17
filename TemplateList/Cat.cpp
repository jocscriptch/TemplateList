#include "Cat.h"

Cat::Cat(string race, string color) : race(race), color(color) {}

string Cat::toString()const 
{
	stringstream s;
	s << "Raza ----------------- " << race << endl;
	s << "Color ---------------- " << color << endl;
	return s.str();
}

ostream& operator <<(ostream& exit, const Cat& cat) 
{
	return exit << cat.toString() << endl;
}

Cat::~Cat(){}