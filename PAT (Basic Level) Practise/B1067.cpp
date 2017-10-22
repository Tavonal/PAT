#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	string corr;
	int n;
	int count = 0;
	cin >> corr >> n;
	cin.get();
	vector<string>input;
	string temp;
	getline(cin, temp);
	while(temp!="#"){
		input.push_back(temp);
		getline(cin, temp);	
	}
	input.push_back(temp);

	while (input[count] != "#") {
		if (input[count] != corr) {
			cout << "Wrong password: " << input[count] << endl;
			count++;
			if (count == n) {
				cout << "Account locked" << endl;
				return 0;
			}
		}
		else {
			cout << "Welcome in" << endl;
			return 0;
		}
	}
	return 0;
}