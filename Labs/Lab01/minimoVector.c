#include <stdlib.h>
#include <stdio.h>

int main(void){
	float a;
	int i = 0;
	int size;
	printf("Size of Vector:\n");
	scanf("%d",&size);
	float vector[size];
	while (i != size){
		printf("Enter a float:\n");
		scanf("%f",&a);
		printf("%f was entered\n",a);
		vector[i] = a;
		i += 1;
	}
	int j;
	float min = vector[0];
	for (j = 0;j < size; j++){
		if (vector[j] < min){
			min = vector[j];
		}
	}
	printf("The minimum number of the vector is %f\n",min);
	return 0;
}
