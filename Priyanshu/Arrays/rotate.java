import java.util.*;
class rotate
{
    void leftrotate(int arr[],int d,int n)
    {
        for(int i=0;i<d;i++)
          leftrotatebyone(arr,n);

    }
    void leftrotatebyone(int arr[],int n)
    {
        int i,temp;
        temp=arr[0];
        for(i=0;i<n-1;i++)
            arr[i]=arr[i+1];
        arr[n-1]=temp;
    }
    void printArray(int[] arr,int n)
    {
        for(int i=0;i<n;i++)
          System.out.print(arr[i]+" ");
    }
    public static void main(String[] args)
    {
        rotate ro=new rotate();
        int arr[]={1,2,3,4,5,6,7,8,9};
        ro.leftrotate(arr,2,7);
        ro.printArray(arr,7);
    }
    }
