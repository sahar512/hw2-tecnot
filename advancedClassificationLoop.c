#include "NumClass.h"

int isArmstrong(int n) {
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