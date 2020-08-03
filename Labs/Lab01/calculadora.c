#include <stdlib.h>
#include <stdio.h>

int sum(){
	int a,b;
	printf("Enter number a:");
	scanf("%d",&a);
	printf("Enter numberb:");
	scanf("%d",&b);
	int c = a + b;
	printf("%d + %d = %d\n",a,b,c);
}
int res(){
	int a ,b;
	printf("Enter the number a:");
	scanf("%d",&a);
	printf("Enter the number b:");
	scanf("%d",&b);
	int c = a - b;
	printf("%d - %d = %d\n",a,b,c);
}
int mul(){
	int a,b,c;
	printf("Enter the number a:");
	scanf("%d",&a);
	printf("Enter the number b:");
	scanf("%d",&b);
	c = a * b;
	printf("%d * %d = %d\n",a,b,c);
}
int divi(){
	int a,b;
	float c;
	printf("Enter the number a:");
	scanf("%d",&a);
	printf("Enter the number b:");
	scanf("%d",&b);
	c = a/b;
	printf("%d / %d = %f\n",a,b,c);
}
void menu(void){
	int opt;
	opt = 1;
	while (opt != 5){
		printf("1. Suma\n");
		printf("2. Resta\n");
		printf("3. Multiplicacion\n");
		printf("4. Division\n");
		printf("5.Salir\n");
		printf("Option:");
		scanf("%d",&opt);
		if (opt == 1){
			sum();
		}
		else if (opt == 2){
			res();
		}
		else if (opt == 3){
			mul();
		}
		else if (opt == 4){
			divi();
		}
		else if (opt == 5){
			printf("Quitting menu...\n");
		}
		else{
			printf("Invalid option\n");
		}
	}
}

int main(void){
	menu();
}
