#include <iostream>

using namespace std;

long a1, b1, a2, b2, a, b;

int gcd(long a, long b) {
  if (b == 0)return a;
  long r;
  while ((r = a%b))a = b, b = r;
  return b;
}

void simplify(long &a, long &b)
{
  long k = gcd(abs(a), b);
  a /= k;
  b /= k;
}
void disRa(long a, long b) {
  if (0 == b) {
    cout << "Inf";
    return;
  }
  if (0 == a) {
    cout << '0';
    return;
  }
  long sg = (a < 0) ? -1 : 1;
  a *= sg;
  long k = a / b;
  a %= b;
  if (-1 == sg) cout << "(-";
  if (k) cout << k;
  if (k&&b != 1)cout << " ";
  if (1 != b)cout << a << '/' << b;
  if (-1 == sg)cout << ")";
}

void disEqual(long a1, long b1, long a2, long b2, long a, long b, char op) {
  disRa(a1, b1);
  cout << ' ' << op << ' ';
  disRa(a2, b2);
  cout << " = ";
  disRa(a, b);
  cout << endl;
}
void addition()
{
  a = a1*b2 + a2*b1;
  b = b1*b2;
  simplify(a, b);
  disEqual(a1, b1, a2, b2, a, b, '+');
}
void subtraction()
{
  a = a1*b2 - a2*b1;
  b = b1*b2;
  simplify(a, b);
  disEqual(a1, b1, a2, b2, a, b, '-');
}
void multiplication()
{
  a = a1*a2;
  b = b1*b2;
  simplify(a, b);
  disEqual(a1, b1, a2, b2, a, b, '*');
}
void division()
{
  a = a1*b2;
  b = b1*a2;
  if (b<0) b = -b, a = -a;
  simplify(a, b);
  disEqual(a1, b1, a2, b2, a, b, '/');
}

int main()
{
  char ch;
  cin >> a1>>ch >> b1 >> a2 >>ch>> b2;
  simplify(a1, b1);
  simplify(a2, b2);
  addition();
  subtraction();
  multiplication();
  division();
  system("pause");
  return 0;
}