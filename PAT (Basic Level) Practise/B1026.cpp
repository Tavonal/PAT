#include<iostream>
#include<iomanip>
using namespace std;

const int CLK = 100;

int main()
{
	int C1, C2;

	int s, m, h;
	cin >> C1 >> C2;
	int time = (C2 - C1 + 50) / CLK;
	s = time % 60;
	m = time / 60 % 60;
	h = time / 60 / 60;
	cout << setw(2) << setfill('0') << h << ':' << setw(2) << setfill('0') << m << ':' << setw(2) << setfill('0') << s << endl;
	return 0;
}