#include<iostream>
using namespace std;

int main() {

	int team[1000] = { 0 };
	int n;
	char ch;
	cin >> n;
	int teamNum, people, grade;
	int maxGrade = team[0], id;
	for (int i = 0; i < n; i++) {
		cin >> teamNum >> ch >> people >> grade;
		team[teamNum] += grade;
	}
	for (int i = 0; i < 1000; i++)
		if (team[i] > maxGrade) {
			id = i;
			maxGrade = team[i];
		}
	cout << id << ' ' << maxGrade << endl;
	return 0;
}