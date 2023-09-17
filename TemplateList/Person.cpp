#include "Person.h"

Person::Person(string name, string last1, string last2) :name(name), last1(last1), last2(last2) {

}
string Person::getName()const {
	return name;
}
string Person::getLast1()const {
	return last1;
}
string Person::getLast2()const {
	return last2;
}
string Person::toString()const {
	stringstream s;
	s << "Nombre -------------- " << name << endl;
	s << "Apellido1 -------------- " << last1 << endl;
	s << "Apellido2 -------------- " << last2 << endl;
	return s.str();
}

ostream& operator << (ostream& exit, const Person& per) {
	return exit << per.toString() << endl;
}
Person::~Person(){}
