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
