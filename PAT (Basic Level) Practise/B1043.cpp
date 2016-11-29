#include<iostream>
#include<cstring>
using namespace std;


int ch[6] = { 'P','A','T','e','s','t' };
int cont[128] = { 0 };
int main()
{
	char str[10000] = { '\0' };
	cin >> str;
	int len = strlen(str);
	for (int i = 0; i < len; i++)
		++cont[str[i]];
	while (1) {
		for (int i = 0; i < 6; i++) {
			if (cont[ch[i]] > 0) {
				cout << (char)ch[i];
				cont[ch[i]]--;
			}
		}
		if (cont[ch[0]] + cont[ch[1]] + cont[ch[2]] + cont[ch[3]] + cont[ch[4]] + cont[ch[5]] == 0)
			break;
	}
	return 0;
}