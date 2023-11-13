#include <iostream>
#include <chrono>
//--- headers
//--- end headers
#define ll long long
#define ull unsigned long long
// #define DEBUG
#define TIME
using namespace std;

int solve()
{
  int n;
  cin >> n;
  cout << "n = " << n << endl;
  return 0;
}
int main()
{
  ios_base::sync_with_stdio(false);
#ifdef DEBUG
  freopen("in", "r", stdin);
  freopen("out", "w", stdout);
#endif
  ll T;
  cin >> T;
  while (T)
  {
#ifdef TIME
    auto start = chrono::high_resolution_clock::now();

    solve();

    auto end = chrono::high_resolution_clock::now();
    cout << endl;

    double time_taken = chrono::duration_cast<chrono::milliseconds>(end - start).count();
    cout << "-- " << time_taken;
    cout << " ms" << endl;
    cout << endl;
#endif
#ifndef TIME
    solve();
#endif
    T--;
  }
  return 0;
}