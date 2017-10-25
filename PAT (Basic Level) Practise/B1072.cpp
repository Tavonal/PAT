#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

bool find_X(int f[],int len,int n)
{
	for (int i = 0; i < len; i++)
	{
		if (n == f[i])
			return true;
	}
	return false;
}

int main()
{
	int n, m;
	int violat[6] = { 0};
	//vector<int>::iterator iter;
	vector<string> stu;
	vector<string>::iterator iter;
	vector<vector<int> > obj;
	string name;
	int k,temp;
	int sum_stu=0, sum_obj=0;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
		cin>>violat[i];
	for (int i = 0; i < n; i++)
	{
		vector<int >rows;
		cin >> name >> k;
		//	bool flag_name = false;
		bool flag = false;
		for (int j = 0; j < k; j++)
		{
			cin >> temp;
			if(find_X(violat,m,temp))
			{
				if (!flag)
				{
					flag = true;
					stu.push_back(name);
					sum_stu++;
				}
				rows.push_back(temp);
				sum_obj++;
			}
		}
		if (rows.size() != 0)
			obj.push_back(rows);
	}

	for (int i = 0; i < stu.size(); i++)
	{
		cout << stu[i] << ": ";
		for (int j = 0; j < obj[i].size(); j++)
		{
			if (j == 0)
				cout <<setfill('0')<<setw(4)<< obj[i][j];
			else 
				cout << ' '<<setfill('0') << setw(4)<<obj[i][j];
		}
		cout << endl;
	}
	cout << sum_stu << ' ' << sum_obj << endl;
	return 0;
}