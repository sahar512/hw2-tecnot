#include "NumClass.h"
#include <math.h>
int sum (int num,int count)
{
    if(num!=0 && count!=0)
    return (pow((num%10),count))+sum(num/10,count);
    return 0;
}
int countD(int num)
{
    static int counter=0;
     
    if(num>0)
    {
        counter++;
        countD(num/10);
    }
    else
    {
        return counter;
    }
}
int sumresult(int num)
{
    int count=countD(num);
    return sum(num,count);
}
int isArmstrong(int num)
{
    if(num==sumresult(num)) return 1;
    return 0;
}
int reverse(int num, int rev)
{
    if(num==0)
        return rev;
        return reverse (num/10, rev*10 + num%10);
}
int revereresult(int num)
{
    return reverse(num,0);
}
int isPalindrome(int num)
{
    if(num==revereresult(num))
    {
    return 1;
    }
    return 0;
}
