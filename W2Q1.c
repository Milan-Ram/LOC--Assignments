#include <stdio.h>
int main(){

  char str[1000];
  char rev[1000];
  int i, j, count = 0;
  printf("Enter Number");
  scanf("%s", str);
  printf("\n Initial String: %s", str);

while (str[count] != '\0')
  {
    count++;
  };
  j = count - 1;
for (i = 0; i < count; i++) { 
	
	rev[i] = str[j]; 
	j--; 
	};
	
printf("\nString After Reverse: %s", rev);
}
