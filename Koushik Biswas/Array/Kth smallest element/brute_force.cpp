#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &it:v){
        cin>>it;
    }
    int k;
    cin>>k;
    sort(v.begin(),v.end());

    cout<<v[k-1];
}
// Time Complexity of the code--> O(nlogn)
