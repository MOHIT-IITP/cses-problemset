// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007

int main() {
    ll n ;
    cin>>n;
    vector<ll> vec;
    vec.push_back(n);
    while(n!=1){
        if(n%2==0){
            n/=2; // dividing by 2
            vec.push_back(n);      
        }else{
            n = n * 3 + 1;
            vec.push_back(n);      
        }
    }
    for(auto it : vec){
        cout<<it<<" "; 
    }
    cout<<endl;
}
