#include "NumClass.h"

int isPrime(int x) {
   if(x<2) return 0;
  int prime=1;
   for(int i=2;i<x;i++)
   {
       if(x%i==0)
       {
           prime=0;
           break;
       }
   }
   return prime;
}

int isStrong(int x) {
int y=x,z;
    int Tmp1=1, Tmp2=0;
    int count=0;
    while(y>0){
        count++;
        y=y/10;
    }
    y=x;
    for(int i=0;i<count; i++){
        z=y%10;
        for(int j=1;j<=z;j++){
            Tmp1*=j;
        }
        Tmp2+=Tmp1;
        Tmp1=1;
        y=y/10;
    }
    if(Tmp2==x)
    return 1;
     return 0;
}
