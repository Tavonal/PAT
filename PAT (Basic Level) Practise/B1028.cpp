#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

struct People {
	string name;
	int year;
	int month;
	int day;
}p[100001];

bool check(People s)
{
	if (s.year > 2014)return false;
	else if (s.year == 2014 && s.month > 9)return false;
	else if (s.year == 2014 && s.month == 9 && s.day > 6)return false;
	else if (s.year < 1814)return false;
	else if (s.year == 1814 && s.month < 9)return false;
	else if (s.year == 1814 && s.month == 9 && s.day < 6)return false;
	return true;
}
bool comp(People p1, People p2)
{
	if (p1.year < p2.year)return true;
	else if (p1.year > p2.year)return false;
	else if ((p1.year == p2.year)&&(p1.month < p2.month))return true;
	else if ((p1.year == p2.year)&&(p1.month > p2.month))return false;
	else if ((p1.year == p2.year)&&(p1.month == p2.month)&&(p1.day < p2.day))return true;
	else if ((p1.year == p2.year)&&(p1.month == p2.month)&&(p1.day > p2.day))return false;
}

int main() 
{
	int N;
	char ch;
	int vaild=0;
	People young, old, temp;
	string younger, older;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> temp.name >> temp.year >> ch >> temp.month >> ch >> temp.day;
		if (check(temp))
			p[vaild++] = temp;
	}
	young = old = p[0];
	for (int i = 0; i < vaild; i++) {
		if (comp(young, p[i]))young = p[i];
		if (!comp(old, p[i]))old = p[i];
	}
	cout << vaild <<' '<< old.name<<' '<<young.name<<endl;
	return 0;
}
