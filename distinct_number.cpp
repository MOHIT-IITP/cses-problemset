// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007

int main() {
    long n;
    cin>>n;
    vector<long> vec(n);
    for(long i=0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(), vec.end());
    int count = 1;
    for(int i =0;i<n-1;i++){
        if(vec[i] != vec[i+1]){
            count++;
        }
    }
    cout<<count;
    return 0;
}
