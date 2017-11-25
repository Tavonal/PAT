#include<iostream>
#include<vector>
using namespace std;
char s[3] = { 'A','B','C' };
void output(int x)
{
  if (x < 10)
    cout << x;
  else
    cout << s[x - 10];
}
int main()
{
  int a1[2] = { 0 }, a2[2] = { 0 }, a3[2] = { 0 };
  int a, b, c; 
  cin >> a >> b >> c;

  int t = 0;
  while (a) {
    a1[t++] = a %13;
    a /= 13;
  }
  t = 0;
  while (b) {
    a2[t++] =b % 13;
    b/= 13;
  }
  t = 0;
  while (c) {
    a3[t++] = c % 13;
    c /= 13;
  }
  cout << '#';
  output(a1[1]); output(a1[0]);
  output(a2[1]); output(a2[0]);
  output(a3[1]); output(a3[0]);
  return 0;
}