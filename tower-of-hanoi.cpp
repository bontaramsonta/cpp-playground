// tower of hanoi recursive solution
#include <iostream>
using namespace std;

void TowerOfHanoi(int n, int s, int d, int h)
{
  if (n == 1)
  {
    cout << "Move " << 1 << " from " << s << " to " << d << endl;
    return;
  }
  TowerOfHanoi(n - 1, s, h, d);
  cout << "Move " << n << " from " << s << " to " << d << endl;
  TowerOfHanoi(n - 1, h, d, s);
}

int solve()
{
  int n, s = 1, h = 2, d = 3;
  cin >> n;
  TowerOfHanoi(n, s, d, h);
  return 0;
}
int main()
{
  int T;
  cin >> T;
  while (T)
  {
    solve();
    cout << endl;
    T--;
  }
  return 0;
}