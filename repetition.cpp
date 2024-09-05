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
  string s;
  cin >> s;

  int count = 0;
  int maxLen = 0;

  for (int i = 1; i < s.size(); i++) {
    if (s[i] == s[i - 1]) {
      count++;
    } else if (s[i] != s[i - 1]) {
      maxLen = max(maxLen, count);
      count = 0;
    }
  }
  maxLen = max(maxLen, count);
  cout << maxLen + 1;
}

int main() {
  fast;
  solve();
  return 0;
}
