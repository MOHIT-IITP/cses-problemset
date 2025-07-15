// MOHIT-IITP template
#include <bits/stdc++.h>
#include <numeric>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007

int main() {
    ll n; cin>>n;
    vector<ll> vec(n);
    for(int i =0;i<n;i++){
        cin>>vec[i];
    }
    ll totalSum = n * (n+1) / 2;
    ll currSum = accumulate(vec.begin(), vec.end(), 0LL);
    ll ans =  totalSum - currSum;
    cout<<ans;
    return 0;
}
