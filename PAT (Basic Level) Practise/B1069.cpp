#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	vector<string> v;
	vector<string>::iterator iter;
	vector<string> bingo;
	int m, n, s;
	cin >> m >> n >> s;
	cin.get();
	string temp;
	for (int i = 0; i < m; i++)
	{
		getline(cin, temp);
		v.push_back(temp);
	}
	for (int i = s-1; i < m;)
	{
		iter = find(bingo.begin(), bingo.end(), v[i]);
		if (iter == bingo.end())
		{
			bingo.push_back(v[i]);
			i += n;
		}
		else
			i++;
	}
	if (bingo.size() == 0)
		cout << "Keep going..." << endl;
	else
	{
		for (iter = bingo.begin(); iter != bingo.end(); iter++)
			cout << (*iter) << endl;
	}
	return 0;
}