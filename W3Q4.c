#include <stdio.h> 


int swap(int x, int y){

	int temp = x; 
    x = y; 
    y = temp; 
    printf(" After Swapping: x = %d, y = %d",  x, y); 
	}

int main() 
{ 
    int x;
    int y; 
    
    printf("Enter Value of x \n"); 
    scanf("%d", &x); 
    printf("\nEnter Value of y\n "); 
    scanf("%d",&y); 
    
    swap(x,y);
    

    return 0; 
}
