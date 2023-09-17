#pragma once
#include <iostream>
#include <sstream>
using namespace std;
class Person
{
private:
	string name;
	string last1;
	string last2;
public:
	Person(string, string, string);
	~Person();
	string getName()const;
	string getLast1()const;
	string getLast2()const;
	virtual string toString()const;
};
ostream& operator << (ostream&, const Person&);

