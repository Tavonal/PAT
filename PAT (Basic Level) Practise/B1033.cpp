#include<iostream>
#include<string.h>

using namespace std;

bool str[128] = { 0 };
char output[100000];
int main()
{
	int len1, len2;
	bool flag = 0;
	int temp;
	char ch;
	while ((ch = getchar()) != '\n') {
		if (ch >= 'a'&&ch <= 'z') {
			temp = (int)ch;
			str[temp] = true;
			str[temp - 32] = true;
		}
		else if (ch >= 'A'&&ch <= 'Z') {
			temp = (int)ch;
			str[temp] = true;
			str[temp + 32] = true;
		}
		else {
			temp = (int)ch;
			str[temp] = true;
		}
	}
	cin >> output;
	flag = str[43];
	len2 = strlen(output);
	for (int i = 0; i < len2; i++) {
		temp = (int)output[i];
		if (str[temp] == true)
			continue;

		else if ((temp >= 97 && temp <= 122) && (str[temp - 32] == false))
		{
			cout << output[i];
		}
		else if (temp >= 65 && temp <= 90) {
			if (flag == true)
				continue;
			else
				cout << output[i];
		}
		else
			cout << output[i];
	}
	cout << endl;
	return 0;
}