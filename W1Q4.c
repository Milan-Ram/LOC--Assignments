#include <stdio.h>
 
int main()
{
float a1,a2;
int exp;
printf("use 1 to add \n 2 to subtract \n 3 to multiply\n 4 to divide\n");
printf("enter two numbers\n");
scanf("%f""%f",&a1,&a2);
printf("enter desired function\n");
scanf("%d",&exp);
switch (exp){
	case (1):printf("%f",a1 + a2);
	break;
	case(2):printf("%f",a1-a2);
	break;
	case(3):printf("%f",a1*a2);
	break;
	case (4): printf("%f",a1/a2);
	break;
	default: printf("error "); };

	return 0;
}
 
