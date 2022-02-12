#include <stdio.h>
 
int main()
{
	int a1;
	printf("Input a number\n");
	scanf("%d",&a1);
	int b=a1%2;
	switch(b){
		case(0):printf("even");
		break;
 default:printf("odd");};
	return 0;
}
 
