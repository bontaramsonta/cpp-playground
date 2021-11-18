// g++ -std=c++17 -O2 -Wall main.cpp && ./a.out<in
#include <iostream>
#include <vector>
#define ll long long
#define ull unsigned long long
// #define DEBUG
using namespace std;

int solve()
{
  int n;
  cin >> n;
  cout << n;
  return 0;
}
int main()
{
#ifdef DEBUG
  freopen("in", "r", stdin);
  // freopen("out", "w", stdout);
#endif
  ll T;
  cin >> T;
  while (T)
  {
    solve();
    cout << endl;
    T--;
  }
  return 0;
}