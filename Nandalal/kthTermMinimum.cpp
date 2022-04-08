#include<iostream>
#include<vector>


using namespace std;

int sortArr(vector<int> &arr, int n, int k)
{
    for(int i=0; i<n-1; i++)
    {
        int min =i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
   cout<<"Kth term is "<<arr[k-1];
}
int main(){
    int n, element,min;
    vector<int> v;
    cout<<"Enter the size of the vector:- ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter an element to add to the vector:- ";
        cin>>element;
        v.push_back(element);
    }

    cout<<"Enter the  kth term to be showm:- ";
    cin>>min;
    sortArr(v, n, min);


return 0;
}