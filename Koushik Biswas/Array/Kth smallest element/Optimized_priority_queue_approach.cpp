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

    //Using Priority Queue
    priority_queue<int>pq;
    for(int i=0;i<n;i++){
        pq.push(v[i]);
        if(pq.size()>k){
            pq.pop();
        }
    }

    cout<<pq.top();
}
// Time Complexity of the code--> O(nlogk)
