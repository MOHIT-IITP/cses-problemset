// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007

int main() {
    string s; cin>>s;
    int maxi = 0;
    int left = 0, right = 0;
    int n = s.length();
    while(right < n){
        if(s[left] == s[right]){
            right++;
        }else{
            maxi = max(maxi, right - left);
            left = right;
        }
    }
    maxi = max(maxi, right - left);
    cout<<maxi;
}
