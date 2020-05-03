#include "Auto.h"
//template

Auto::Auto(int id, string marke, string modell)
{
	this->id = id;
	Marke = marke;
	Modell = modell;
}

int Auto::getId()const { return id; }
void Auto::setId(int value) { id = value; }
string Auto::getMarke()const { return Marke; }
void Auto::setMarke(string value) { Marke = value; }
string Auto::getModell()const { return Modell; }
void Auto::setModell(string value) { Modell = value; }

string Auto::toString()
{
	return to_string(id) + ": " + string(Marke) + " " + string(Modell);
}

bool Auto::operator==(const Auto& a)
{
	return id == a.getId();
}

ostream& operator <<(ostream& os, const Auto& a)
{
	os << a.getId() << " " << a.getMarke() << " " << a.getModell();
	return os;
}