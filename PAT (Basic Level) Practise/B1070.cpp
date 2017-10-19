#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
  vector<int >v;
  vector<int>::iterator iter;
  int n;
  cin >> n;
  int temp;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    v.push_back(temp);
  }
  sort(v.begin(), v.end());
  int sum = v[0];
  for (iter = v.begin()+1; iter!=v.end(); iter++)
  {
    sum = (sum + *iter) / 2;
  }
  cout << sum << endl;
  return 0;
}