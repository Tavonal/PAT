#include<iostream>
#include<string>
using namespace std;

struct Stu {
	string name;
	string num;
	int grade;
};

int main()
{
	Stu student[10000];
	int n, hgra, logra;
	Stu height, low;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> student[i].name >> student[i].num >> student[i].grade;
	}
	height = student[0]; low = student[0];
	hgra = student[0].grade; logra = student[0].grade;
	for (int i = 0; i < n; i++) {
		if (student[i].grade > hgra) {
			height = student[i];
			hgra = student[i].grade;
		}
		if (student[i].grade < logra) {
			low = student[i];
			logra = student[i].grade;
		}
	}
	cout << height.name << ' ' << height.num << endl;
	cout << low.name << ' ' << low.num << endl;
	return 0;
}