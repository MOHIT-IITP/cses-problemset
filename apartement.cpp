// // to be continued 
// have to do this
// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
#define vi vector<int> 

int main() {
    int n, m , k;
    cin>>n>>m>>k;
    vi vec(n);
    set<int> st;
    for(int i =0;i<n;i++){
        cin>>vec[i];
    }
    for(int i = 0;i < m;i++){
        int x;
        cin>>x;
        st.insert(x);
    }

    return 0;
}
