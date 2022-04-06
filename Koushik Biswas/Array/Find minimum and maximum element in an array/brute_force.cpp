pair<long long, long long> getMinMax(long long v[], int n) {
    long long int max__=INT_MIN;
    long long int min__=INT_MAX;
    for(long long int i=0;i<n;i++){
        if(max__<v[i]){
            max__=v[i];
        }
        if(min__>v[i]){
            min__=v[i];
        }
    }
    return make_pair(min__,max__);
}

/*
Time Complexity: Look carefully here every element is checking twice for min and max,
Let, n=5, then total comparison 2*N = 2*5 = 10.
So, Complexity O(2N)

Let's Optimized it.

*/
