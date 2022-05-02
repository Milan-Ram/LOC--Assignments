#include <stdio.h>
 
int main()
{
	int i, n;
	
  int a1=0, a2=1;
  int a=a1+a2;
  printf("enter no. of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d, %d, ", a1, a2);  
    for (i = 3; i <=n; ++i)
    {
    printf("%d, ", a);
    a1 = a2;
    a2 = a;
    a= a1 + a2;
  }

	return 0;
}
 
