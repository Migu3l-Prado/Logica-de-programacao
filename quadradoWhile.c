#include<stdio.h>
#include<locale.h>
/*programa olha se o quadrado do número  digitado pelo usuario é maior é maior ou igual a 50 */ 
main(){
	setlocale(LC_ALL,"Portuguese");
	int num1=0;
	 
	while((num1*num1) <= 50){
		printf("digite um número: ");
		scanf("%d",&num1);
	
	}
	printf("o programa terminou pois o quadrado de %d é maior ou igual a 50",num1);
}
	
