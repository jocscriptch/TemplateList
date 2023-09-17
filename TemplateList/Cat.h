#pragma once
#include <iostream>
#include <sstream>
using namespace std;
class Cat
{
private:
	string race; //raza
	string color;
public:
	Cat(string, string);
	virtual string toString()const;
	~Cat();
};
ostream& operator <<(ostream&, const Cat&);


