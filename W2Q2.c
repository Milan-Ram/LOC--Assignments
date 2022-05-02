#include<stdio.h>
 
int main()
{
 int a[10];
 int i;
 int even= 0;
 int odd = 0;
 
 
 printf(" Enter the Array Elements\n");
 for(i = 0; i < 10; i++)
 {
      scanf("%d", &a[i]);
 };
  
 for(i = 0; i < 10; i++)
 {
   if(a[i] % 2 == 0)
   {
     even = even + a[i];
   }
   else
   {
     odd = odd + a[i];
   };
 };
  
 printf("\n The Sum of Even Numbers = %d ", even);
 printf("\n The Sum of Odd Numbers = %d ", odd);
 
 return 0;
}