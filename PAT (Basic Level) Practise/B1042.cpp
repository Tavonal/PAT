#include<iostream>
#include<cstring>
using namespace std;

int main() {
	int word[26] = { 0 };
	int maxCont = 0, maxId = 0;
	char str[1000];
	cin.getline(str, 1000);
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] >= 'a'&&str[i] <= 'z')
			word[str[i] - 'a']++;
		else if (str[i] >= 'A'&&str[i] <= 'Z')
			word[str[i] - 'A']++;
	}
	for (int i = 0; i < 26; i++) {
		if (word[i] > maxCont) {
			maxCont = word[i];
			maxId = i;
		}
	}
	cout << char('a' + maxId) << ' ' << maxCont << endl;
	return 0;
}