// manual_20.cpp : Defines the entry point for the console application.
//

#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<algorithm>
#include <ctype.h>
using namespace std;

bool myfun(string a, string b)
{
	for (int i = 0; i < min(a.size(), b.size()); i++)
	{
		if (tolower(a.at(i)) != tolower(b.at(i)))
		{
			return (tolower(a.at(i)) < tolower(b.at(i)));
		}
	}
	return (a.size() < b.size());
}

int main()
{
	ifstream fin("input.txt");
	ofstream fout("output.txt");
	vector<string> s;
	string temp;
	int k = 0;

	while (!fin.eof())
	{
		fin >> temp;
		s.push_back(temp);
	}

	sort(s.begin(), s.end(),myfun);

	for (int i = 0; i < s.size(); i++)
	{
		fout << s[i] << endl;
	}
	return 0;
}

