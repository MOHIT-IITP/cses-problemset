#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    ll count = 0;
    vector<ll> vec(n);
    for(int i = 0;i < n; i++){
        cin>>vec[i];
    }

    for(int i =0;i<n-1;i++){
        if(vec[i] >= vec[i+1])
        {
            count += vec[i] - vec[i+1];
            vec[i+1] = vec[i]; 
        }
    }
    cout<<count;
    return 0;
}
