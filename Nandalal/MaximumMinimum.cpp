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
int min = num[0];
int max = num[0];
for(int i=0;i<n-1;i++)
{
    if(num[i]<num[i+1]){
        min=num[i];
    }
    if(num[i]<num[i+1]){
        max=num[i+1];
}
cout<<"max= "<<max<<endl;
cout<<"min= "<<min<<endl;
return 0;
}