int climbStairs(int n){
    // if(n<3){
    //     return n;
    // }
    // int *d=(int*)calloc(n,sizeof(int));
    // d[0]=1;
    // d[1]=2;
    // for(int i=2;i<n;i++){
    //     d[i]=d[i-1]+d[i-2];
    // }
    // return d[n-1];
    int steps=1;
    int prev=1;
    while(--n){
        steps += prev;
        prev = steps-prev;
    }
    return steps;
}
