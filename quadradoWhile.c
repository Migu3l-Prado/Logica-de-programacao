#include<stdio.h>
#include<locale.h>
/*programa olha se o quadrado do n�mero  digitado pelo usuario � maior � maior ou igual a 50 */ 
main(){
	setlocale(LC_ALL,"Portuguese");
	int num1=0;
	 
	while((num1*num1) <= 50){
		printf("digite um n�mero: ");
		scanf("%d",&num1);
	
	}
	printf("o programa terminou pois o quadrado de %d � maior ou igual a 50",num1);
}
	
