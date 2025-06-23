#include <stdio.h>
int main(void){
	int k;
	int n;
	int l;
	int sum;
	int sum_5 = 0;
	int sum_15 = 0;
	int sum_3 = 0;
	k = 0;
	while( k<1000 ){
		sum_3 += k;
		k += 3;
	}
	n = 0;
	while( n<1000 ){
		sum_5 += n;
		n += 5;
	}
	l = 0;
	while( l<1000 ){
		sum_15 += l;
		l += 15;
	}
	sum = sum_5 + sum_3 - sum_15; 
	printf("this is the sum of the multiples below 1000: %d\n", sum);
return 0;
}
