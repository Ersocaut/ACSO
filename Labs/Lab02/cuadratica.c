#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(){
	int n,i;
	scanf("%d",&n);
	float a,b,c;
	for (i = 0; i < n; i++){
		scanf("%f",&a);
		scanf("%f",&b);
		scanf("%f",&c);
		float disc = ( b * b ) - (4 * a * c);
		if (disc < 0){
			printf("no roots\n");
		}
		else{
			float raiz;
			raiz = sqrt(disc);
			float x1,x2;
			x1 = ( ( -b ) + raiz ) / ( 2 * a);
			x2 = ( ( -b ) - raiz ) / ( 2 * a);
			if ( x1 == x2 ){
				printf("%.2f\n",x1);
			}
			else{
				printf("%.2f\n%.2f\n",x1,x2);
			}
		}
	}
}
