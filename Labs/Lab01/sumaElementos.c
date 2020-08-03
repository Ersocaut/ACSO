#include <stdlib.h>
#include <stdio.h>

void suma(int vector[],int size){
	int j;
	int acum;
	acum = 0;
	for (j = 0; j < size; j++){
		acum = acum +  vector[j];
	}
	printf("Sum of vector us %d\n",acum);
}
void show(int vector[], int size){
	int i ;
	for (i = 0; i < size; i++){
		printf("%d is in the position %d\n",vector[i],i);
	}
}
int main(void){
	int size;
	int k;
	printf("Size of vector:");
	scanf("%d",&size);
	int vector[size];
	int add;
	for (k = 0; k < size; k++){
		printf("Number to add:");
		scanf("%d",&add);
		vector[k] = add;
	}
	show(vector,size);
	suma(vector,size);
}
