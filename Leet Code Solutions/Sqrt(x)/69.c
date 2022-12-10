#include<stdio.h>
#include<assert.h>
#define EPSILON 0.00000001f

int mySqrt(int x){
    double y=1.0;
    double f,d;
    for(int i=0;i<32;i++){
        f=y*y-x;
        if((f>0 && f<EPSILON ) || (f<0 && f>-EPSILON)){
            break;
        }
        d=2*y;
        y=y-f/d;
    }
    return y;
}
