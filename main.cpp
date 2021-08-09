// g++ -std=c++17 -O2 -Wall main.cpp && ./a.out<in
#include <iostream>
#include <vector>
// #define DEBUG
using namespace std;

int solve()
{
  return 0;
}
int main()
{
#ifdef DEBUG
  freopen("in", "r", stdin);
  // freopen("out", "w", stdout);
#endif
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