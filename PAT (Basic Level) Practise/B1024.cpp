#include<iostream>
#include<string>
using namespace std;

int main()
{
	string num;
	char head, sign, exp[10] = { '\0' };
	int expn, mark_e, t = 0, begin = 0;;

	cin >> num;
	int len = num.length();
	head = num[0];
	mark_e = num.find('E');
	sign = num[mark_e + 1];

	for (int i = mark_e + 2; i < len; i++) exp[t++] = num[i];
	expn = atoi(exp);

	if (head == '-')cout << '-';
	if (sign == '+') {
		for (int i = 1; i < mark_e; i++) {
			if (i == expn + 3)cout << '.';
			if (num[i] != '.') { cout << num[i], begin++; }
		}
		for (int i = begin - 1; i < expn; i++)
			cout << '0';
	}
	else {
		cout << "0.";
		for (int i = 1; i < expn; i++)cout << '0';
		for (int i = 1; i < mark_e; i++)
			if (num[i] != '.')cout << num[i];
			else continue;
	}
}
