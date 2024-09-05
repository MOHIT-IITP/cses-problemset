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
  ll n;
  cin >> n;
  vector<ll> res;
  for (int i = 0; i < n - 1; i++) {
    ll x;
    cin >> x;
    res.pb(x);
  }
  ll prevSum = accumulate(res.begin(), res.end(), 0LL);
  ll currSum = (n * (n + 1)) / 2;
  ll ans = currSum - prevSum;
  cout << ans << endl;
}

int main() {
  fast;
  solve();
  return 0;
}
