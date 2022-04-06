#include<iostream>

using namespace std;
int main(){
int num[100], n;
cout<<"\n Enter the size of the array:-";
cin>>n;
cout<<" \n Enter the elements of the array.....\n";
for(int i=0; i<n; i++)
{
    cin>>num[i];
}
int s=0;
int e=n-1;
while(s<e){
    swap(num[s],num[e]);
    s++;
    e--;
}
cout<<endl;
for(int i=0; i<n; i++)
{
    cout<<num[i]<<endl;
}
return 0;
}