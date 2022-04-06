pair<long long, long long> getMinMax(long long a[], int n) {
    long long i,max,min;
    if(n%2==0){
        if(a[0]>a[1]){
            max=a[0];
            min=a[1];
        }
        else{
            max=a[1];
            min=a[0];
        }
        i=2;
    }
    else{
        max=a[0];
        min=a[0];
        i=1;
    }
    
    while(i<n){
        if(a[i]>a[i+1]){
            if(a[i]>max){
                max=a[i];
            }
            if(a[i+1]<min){
                min=a[i+1];
            }
        }
        else{
            if(a[i+1]>max){
                max=a[i+1];
            }
            if(a[i]<min){
                min=a[i];
            }
        }
        i+=2;
    }
    return make_pair(min,max);
    
}

//Reference: https://www.youtube.com/watch?v=X17cM3tKRF4&ab_channel=CppNuts
/* 
Now, here we are comparing any pair 3 times, so num of comparison decreased.

*/
