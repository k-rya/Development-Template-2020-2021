#include<map>
#include "rom.h"
string copy(string s, int first, int k)
{
	string res;
	for (int i = first; i < first + k; i++)
	{
		if (i == s.size())
		{
			return res;
		}
		res += s[i];
	}
	return res;
}
arabic Convertor::toArabic(roman &r)
{
	string n = r.value;
	map<char, int> m;
	m['I'] = 1;
	m['V'] = 5;
	m['X'] = 10;
	m['L'] = 50;
	m['C'] = 100;
	m['D'] = 500;
	m['M'] = 1000;

	int tmp = 0;
	int res = 0;
	for (char c : n)
	{
		int n = m[c];
		if (n < tmp)
		{
			res += tmp;
			tmp = n;
		}
		else if (n > tmp)
		{
			if (tmp == 0)
				tmp = n;
			else
			{
				res += n - tmp;
				tmp = 0;
			}
		}
		else if (n == tmp)
		{
			res += tmp + n;
			tmp = 0;
		}
	}
	return res + tmp;
}

roman Convertor::toRoman(arabic &a) 
{
	std::map <int, std::string> symbol =
	{
		{1000,"M"},
		{ 900, "CM"},
		{500 , "D" },
		{400 , "CD" },
		{ 100, "C" },
		{ 90, "XC" },
		{ 50, "L" },
		{40,"XL"},
		{ 10, "X" },
		{ 9, "IX" },
		{ 5, "V" },
		{ 4, "IV" },
		{ 1, "I" }
	};

	int levels[] = { 1000,900,500,400,100,90,50,40,10, 9, 5, 4, 1 };

	std::string result = std::string();

	for (const int& level : levels)
	{
		if (a.value >= level)
		{
			do
			{
				result += symbol[level];
				a.value -= level;
			} while (a.value >= level);
		}
	}
	return roman{ result };
}
