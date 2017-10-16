#include<iostream>
#include<string>

using namespace std;
string lo[13] = { "tret", "jan","feb" , "mar" , "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec" };
string hi[13] = { "#","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };

void to_string(string& str)
{
	int temp = atoi(str.c_str());
	if (temp > 168||temp<0)return;
	if (temp > 12) {
		int hig = temp / 13;
		int low = temp % 13;
		if (0 != low)
			cout << hi[hig] << ' ' << lo[low] << endl;
		else
			cout << hi[hig] << endl;
	}
	else
		cout << lo[temp] << endl;
}
void to_digital(string& str)
{
	if (str.length() == 3) {
		for (int i = 1; i <= 12; i++)
			if (str == lo[i])cout << i << endl;
			else if (str == hi[i])cout << 13 * i << endl;
	}
	else {
		string s1 = str.substr(0, 3);
		string s2 = str.substr(4, 3);
		int f = 0, l = 0;
		for (int i = 1; i <= 12; i++) {
			if (s1 == hi[i]) f = i;
			if (s2 == lo[i])l = i;
		}
		cout << f * 13 + l << endl;
	}
}
int main()
{
	int N;
	string  str;
	cin >> N;
		int low, hig;
	cin.get();
	for (int i = 0; i < N; i++) {
		getline(cin, str);
		if (str[0] >= '0'&&str[0] <= '9')
			to_string(str);
		else
			to_digital(str);
	}
	return 0;
}
	