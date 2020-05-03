#pragma once
//template
#include <string>
#include <iostream>

using std::string;
using std::ostream;
using std::to_string;

class Auto
{
private:
	int id;
	string Marke;
	string Modell;
public:

	// constructor
	Auto(int, string, string);

	// getters + setters
	int getId() const;
	void setId(int value);
	string getMarke() const;
	void setMarke(string value);
	string getModell() const;
	void setModell(string value);

	string toString();

	bool operator==(const Auto& a1);
	friend ostream& operator<<(ostream& os, const Auto& a);
};