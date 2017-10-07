#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main()
{
	vector<char>v;
	vector<char>::iterator iter;
	char original[81];
	char now[81];
	bool  bad[128] = { false };
	int o_index = 0, n_index = 0;
	int temp = 0;
	char ch;
	cin >> original >> now;
	int len = strlen(original);
	for (int i = 0; i < len; i++) {
		if (original[o_index] == now[n_index]) { o_index++; n_index++; }
		else { 
			if (original[o_index] == '_') {
				temp = (int)original[o_index];
				ch = original[o_index];
				if (bad[temp] == false) {
					v.push_back(ch);
					bad[temp] = true;
				}	
			}
			else if (original[o_index] >= '0'&&original[o_index] <= '9') {
				temp = (int)original[o_index];
				ch = original[o_index];
				if (bad[temp] == false) {
					v.push_back(ch);
					bad[temp] = true;
				}
			}
			else if (original[o_index] >= 'a'&&original[o_index] <= 'z') {
				temp = (int)original[o_index];
				ch = original[o_index]-32;
				if (bad[temp] == false&&bad[temp-32]==false) {
					v.push_back(ch);
					bad[temp] = true;
				}
			}
			else if (original[o_index] >='A'&&original[o_index] <= 'Z') {
				temp = (int)original[o_index];
				ch = original[o_index];
				if (bad[temp] == false&&bad[temp+32]==false) {
					v.push_back(ch);
					bad[temp] = true;
				}
			}
			o_index++;
		}
	}
	for (iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter;
	}
	cout << endl;
	return 0;
}
