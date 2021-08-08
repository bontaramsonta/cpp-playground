// cut rope of length n into lengths of a, b, c such that no. of resultant ropes are maximum
// return the no. of resultant ropes
#include <iostream>
using namespace std;

int ropeCut(int n, int a, int b, int c)
{
  if (n == 0)
    return 0;
  else if (n < 0)
    return -1;
  else
  {
    int res = -1;
    res = max(res, ropeCut(n - a, a, b, c));
    res = max(res, ropeCut(n - b, a, b, c));
    res = max(res, ropeCut(n - c, a, b, c));
    if (res == -1)
      return res;
    else
      return res + 1;
  }
}

inline int solve()
{
  int n, a, b, c;
  cin >> n >> a >> b >> c;
  cout << ropeCut(n, a, b, c);
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