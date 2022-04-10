#include<iostream>

using namespace std;
void sort012(int a[], int n)
{
    int arr[n];
    int k = 0;
    for(int i=0; i<=2; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[j]==i)
            {
                arr[k]=a[j];
                k++;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        a[i]=arr[i];
    }
    cout<<endl;
     for(int i=0; i<n; i++)
    {
        cout<<a[i]<<"\t";
    }
}
int main(){
    int n=0;
    cout<<"\n Enter the size of the array:-   ";
    cin>>n;
    int a[n];
    cout<<"\n Enter the values(0,1,2) for sorting:-....";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort012(a,n);

return 0;
}