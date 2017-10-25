#include<iostream>
#include<map>
#include<vector>
using namespace std;


int m, n, tol;
vector<vector<int> >v;
int dir[8][2]= { { -1, -1 },{ -1, 0 },{ -1, 1 },{ 0, 1 },{ 1, 1 },{ 1, 0 },{ 1, -1 },{ 0, -1 } };
bool judge(int i, int j)
{
  for (int k = 0; k < 8; k++)
  {
    int tx = i + dir[k][0];
    int ty = j + dir[k][1];
    if (tx >= 0 && tx < n && ty >= 0 &&
      ty < m && v[i][j] - v[tx][ty] >= 0 - tol &&
      v[i][j] - v[tx][ty] <= tol)
      return false;
  }
  return true;
}
int main()
{
  int cnt = 0, x = 0, y = 0;
  cin >> m >> n >> tol;
  v.resize(n, vector<int>(m));
  map<int, int> MAP;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j<m ; j++) {
      cin >> v[i][j];
      MAP[v[i][j]]++;
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (MAP[v[i][j]] == 1 && judge(i, j) == true) {
        cnt++;
        x = i + 1;
        y = j + 1;
      }
    }
  }
  if (cnt == 1)
    cout << '(' << y << ", " << x << "): " << v[x - 1][y - 1]<<endl;
  else if (cnt == 0)
    cout << "Not Exist" <<endl;
  else
    cout << "Not Unique" << endl;

  system("pause");
  return 0;
}