#include <stdio.h>
int main(void){
	int sum_3;
	int sum_5;
	int sum_15;
	int sum;
	//calculons la somme des multiples de chaque nombre//
	//nous les ajoutes avec entre eux et on soutrait les multiples de 15//
	sum_3 = ( 999 + 3 ) * 333/2;
	sum_5 = ( 995 + 5 ) * 199/2;
       	sum_15 = ( 990 + 15 ) * 66/2 ;
	sum = sum_3 + sum_5 - sum_15;
printf("the sum of the multiples of 5 and 3 below 1000 are: %d \n", sum);
return 0;
}
		
			
