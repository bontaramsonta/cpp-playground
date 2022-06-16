// g++ -std=c++17 -O2 -Wall main.cpp && ./a.out<in
#include <iostream>
#include <chrono>
#include <iomanip>
//--- headers
#include <algorithm>
#include <vector>
//---
#define ll long long
#define ull unsigned long long
// #define DEBUG
#define TIME
using namespace std;

int display()
{
  return 0;
}

int solve()
{
  int n;
  cin >> n;
  cout << n << endl;
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