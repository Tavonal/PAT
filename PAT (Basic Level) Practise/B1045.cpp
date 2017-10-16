#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	long   arr[100005];
	long   judge[100005];
	vector< long>v1;
	vector< long>::iterator iter;
	int N;
	long max=0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		judge[i] = arr[i];
	}
	sort(judge, judge + N);
	for (int i = 0; i < N; i++) {
		if (arr[i] > max)
			max = arr[i];

		if ((arr[i] == max) && (arr[i] == judge[i]))
			v1.push_back(arr[i]);
	}
	cout << v1.size() << endl;
	for (iter = v1.begin(); iter != v1.end(); iter++)
		if (iter == v1.begin())
			cout << *iter;
		else
			cout<<' ' << *iter;
	cout << endl;
	return 0;
}