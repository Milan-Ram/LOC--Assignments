#include<stdio.h>
 
int main(){

  char str[1000];
  char rev[1000];
  int i, j, count = 0;
  char a;
  printf("Enter Number");
  scanf("%s", str);
  printf("\n Initial String: %s", str);

while (str[count] != '\0')
  {
    count++;
  };
  j = count - 1;
	
	a=str[0];
	str[0] = str[j]; 
	str[j] = a;
	
printf("\nString After Reverse: %s", str);
}
