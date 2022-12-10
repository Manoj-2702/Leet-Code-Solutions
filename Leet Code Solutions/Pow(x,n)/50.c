double myPow(double x, double n){
    if(x==1 || n==0)
        return 1;
    if(n==1)
        return x;
    double ans=1.0;
    unsigned un;
    
    un = (n>0)?(n):(-n);
    x = (n>0)?(x):(1/x);

    while(un){
        if(un & 1){
            ans=ans*x;
        }
        x =x*x;
        un >>= 1;
    }
    return ans;
}
