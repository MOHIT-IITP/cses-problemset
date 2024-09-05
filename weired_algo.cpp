// MOHIT-IITP
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD1 998244353
#define MOD 1000000007
#define fast                                                                   \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);

void solve() {
  long long n;
  cin >> n;
  cout << n << " ";
  while (n != 1) {
    if (n % 2 == 0) {
      n /= 2;
      cout << n << " ";
    } else if (n % 2 != 0) {
      n = n * 3 + 1;
      cout << n << " ";
    }
  }
}

int main() {
  fast;
  solve();
  return 0;
}
