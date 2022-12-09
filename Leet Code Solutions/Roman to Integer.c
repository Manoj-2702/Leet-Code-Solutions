#include<stdio.h>
#include<string.h>

int romanToInt(char * s){
    int out=0;
    int manoj[200];
    manoj['I']=1;
    manoj['V']=5;
    manoj['X']=10;
    manoj['L']=50;
    manoj['C']=100;
    manoj['D']=500;
    manoj['M']=1000;
    
    for(int i=0;i<strlen(s);++i)
    {
        if(manoj[s[i]] < manoj[s[i+1]])
           out -= manoj[s[i]];
        else
           out += manoj[s[i]];
    }
    return out;
}
