#include <stdio.h>
#include "windows.h"
#include "rom.h"
#include <iostream>
using namespace std;

int main() {
	cout << "hi" << endl;
	cout << "I am a program that translates Roman numerals into Arabic and vice versa" << endl;
	cout << "If you want to convert ARABIC numerals to Roman numerals, press 1" << endl;
	cout <<"If you want to convert ROMAN numerals to Arabic numerals, press 2"<<endl;
	int i= 0;
	cin >> i ;
	if (i == 1) 
	{
		arabic ar;
		cout << "enter an Arabic number" << endl;
		cin >> ar;
		Convertor c;
		roman r;
		r = c.toRoman(ar);
		cout << ar << " " << "in Roman is" <<" "<< r << endl;
		i = 0;

	}
	if (i == 2) {
		Convertor c1;
		roman r1;
		arabic ar1;
		cout << "enter a Roman number" << endl;
		cin >> r1;
		ar1 = c1.toArabic(r1);
		cout << r1 << " " << "in Arabic is" << " " << ar1 << endl;
		i = 0;

	}




  
  

  return 0;
}
