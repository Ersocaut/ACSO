#include <stdlib.h>
#include <stdio.h>
#include <math.h>
void egypt(unsigned long int a, unsigned long int b){
	if (a == 0 || b == 0){return;}
	if ( b%a == 0 ){
		printf("%lu\n",b/a);
		return;
	}
	if (a%b == 0){
		printf("%lu\n",a/b);
		return;
	}
	if ( a > b){
		printf("%lu\n",a/b);
		egypt(a%b,b);
		return;
	}
	unsigned long int N = (b/a) + 1;
	printf("%lu\n",N);
	egypt(a*N-b,b*N);
}


int main(){
	int n,i;
	scanf("%d",&n);
	for ( i = 0; i < n; i++){
		unsigned long int  a, b;
		scanf("%lu",&a);
		scanf("%lu",&b);
		egypt(a,b);
		unsigned long int z = 0;
		printf("%lu\n",z);
	}
	return EXIT_SUCCESS;
}
