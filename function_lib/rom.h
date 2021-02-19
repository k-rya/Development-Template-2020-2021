#ifndef INCLUDE_ROM_H_
#define INCLUDE_ROM_H_
#include <iostream>
#include <string>
using namespace std;



struct roman {
	std::string value;
	roman() : value(" ") {};
	roman(string val) : value(val) {};
	friend istream& operator >> (istream& in, roman& rom) 
	{
		string str;
		in >> str;
		rom.value = str;

		return in;
	}
	friend ostream& operator<<(ostream& out, const roman& rom)
	{
		out << rom.value;

		return out;
	}
};

struct arabic {
	int value;
	arabic() : value(0) {};
	arabic(int val) : value(val) {};
	friend istream& operator >> (istream& in, arabic& rom)
	{
		int val;
		in >> val;
		rom.value = val;

		return in;
	}
	friend ostream& operator<<(ostream& out, const arabic& rom)
	{
		out << rom.value;

		return out;
	}

};



class Convertor {
public:
	

	arabic toArabic(roman &r);
	roman toRoman(arabic &a);

	
								

};


#endif  // INCLUDE_ROM_H_
