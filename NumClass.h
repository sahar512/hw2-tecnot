#ifndef _NUMCLASS_H
#define _NUMCLASS_H
/* will return if a number is Armstrong number
An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
For Example: 407 = 43 + 03 + 73 = 64 + 0 + 343 = 407
*/
int isArmstrong(int n)
{
    int temp, s, d= 0;
   double sum = 0 ;
   temp = n;
   for (temp = n; temp != 0; ++d) {
       temp /= 10;
   }

   for (temp = n; temp != 0; temp /= 10) {
       s = temp % 10;
      sum += pow(s, d);
   }
   if (sum == n)
   {
        return 1;
   }
   return 0;
}
/* will return if a number is a palindrome */
int isPalindrome(int n) 
{
    int temp,temp2=0;
    temp = n;
  while (temp != 0)
  {
    temp2 = temp2 * 10;
    temp2 = temp2 + temp%10;
    temp = temp/10;
  }
  if (n == temp2)
  {
    return 1;
  }
  return 0;
}

/* will return if a number is prime*/
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
/*Strong number is a special number whose sum of the factorial of digits is equal to the original
number. For Example: 145 is strong number
1! + 4! + 5! = 145
*/
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

#endif
