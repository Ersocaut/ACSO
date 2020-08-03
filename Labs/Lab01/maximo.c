#include <stdio.h>
int main (void){
	float a,b;
	printf("Enter the fisrt float:");
	scanf("%f",&a);
	printf("Enter the second float:");
	scanf("%f",&b);
	if (a < b){
		printf("%f is bigger\n",b);
	}
	else{
		printf("%f is bigger\n",a);
	}
	return 0;
}
