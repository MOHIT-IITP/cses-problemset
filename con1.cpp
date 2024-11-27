#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i =0;i<n;i++){
        
            cin>>vec[i];
        }
        int marks = accumulate(vec.begin(), vec.end(), 0);
        int totalm = (n + 1) * 100;
        totalm /= 2;
        int req = totalm - marks;
        if(req > 100){
            cout<< req;
        }
        else{
            cout<< max(0, req);
        }
        cout<<endl;
    }
    return 0;
}
