/* Josephus problem in a cirle of n people every kth person is killed 
 * find the index of last surviving person
 */
#include <iostream>
#include <vector>
using namespace std;

int joseph(int n, int k)
{
  if (n == 1)
    return 0;
  int res = (joseph(n - 1, k) + k) % n;
  return res;
}

int solve()
{
  int n, k;
  cin >> n >> k;
  cout << joseph(n, k);
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