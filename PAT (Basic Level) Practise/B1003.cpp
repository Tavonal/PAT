#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n, k = 0;
	cin >> n;
	string s[10];
	for (int i = 0; i < 10; i++)
		s[i] = "YES";

	for (int i = 0; i < n; i++) {
		string str;
		int kp, kt, kp_t, len;
		cin >> str;
		kp = str.find('P');
		kt = str.find('T');
		kp_t = kt - kp - 1;
		len = str.length();

		for (int j = 0; j < len; j++)
			if (str[j] != 'P'&&str[j] != 'A'&&str[j] != 'T') {
				s[k] = "NO";
				break;
			}
		for (int j = 0; j < kp; j++)
			if (str[j] != 'A') {
				s[k] = "NO";
				break;
			}
		for (int j = kp + 1; j < kt; j++)
			if (str[j] != 'A') {
				s[k] = "NO";
				break;
			}
		for (int j = kt + 1; j < len; j++)
			if (str[j] != 'A') {
				s[k] = "NO";
				break;
			}

		if ((kp_t*kp != (len - kt - 1)) || (kp_t < 1))
			s[k] = "NO";
		k++;
	}
	for (int i = 0; i < n; i++)
		cout << s[i] << endl;
	return 0;
}