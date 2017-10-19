#include<iostream>
#include<string>
using namespace std;

int main()
{
	int sum = 0;
	int one = 0, zero = 0;
	string s;
	getline(cin, s);
	int len = s.length();
	for(int i=0;i<len;i++){
		if (s[i] >= 'a'&&s[i] <= 'z')
			sum += (int)s[i] - 97 + 1;
		else if (s[i] >= 'A'&&s[i] <= 'Z')
			sum += (int)s[i] - 65 + 1;
		else continue;
	}
	int temp;
	while (0 != sum) {
		temp = sum % 2;
		if (temp == 1)one++;
		else zero++;
		sum /= 2;
	}
	cout << zero << ' ' << one << endl;
	return 0;
}