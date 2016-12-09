#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	char week[7][4] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
	string str1, str2, str3, str4;
	char day, hour;
	int flag = 1, h = 1;
	int min = 0, len1, len2;
	cin >> str1 >> str2 >> str3 >> str4;
	len1 = str1.length() > str2.length() ? str2.length() : str1.length();
	len2 = str3.length() > str4.length() ? str4.length() : str3.length();
	for (int i = 0; i <len1; i++) {
		if (flag == 1 && str1[i] == str2[i] && str1[i] >= 'A'&&str1[i] <= 'G') {
			day = str1[i]; flag++; continue;
		}
		if (flag == 2 && str1[i] == str2[i] && ((str1[i] >= 'A'&&str1[i] <= 'N') || (str1[i] >= '0'&&str1[i] <= '9'))) {
			hour = str1[i]; break;
		}
	}

	for (int i = 0; i <len2; i++) {
		if (str3[i] == str4[i] && ((str3[i] >= 'A'&&str3[i] <= 'Z') || (str3[i] >= 'a'&&str3[i] <= 'z'))) {
			min = i; break;
		}
	}
	if (hour >= 'A'&&hour <= 'N')
		h = hour - 'A' + 10;
	else if (hour >= '0'&&hour <= '9')
		h = hour - '0';
	cout << week[day - 'A'] << ' ' << setw(2) << setfill('0') << h << ':' << setw(2) << setfill('0') << min << endl;
}