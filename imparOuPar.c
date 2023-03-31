#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int num,i;
	
	printf("digite um número: ");
	scanf("%d",&num);
	
		printf("os pares são:  ");
		for(i=2;i<=num;i=i+2){		
		printf("\n%d",i);
	    }
	    printf("\n");
	printf("\n os impares são");
	for(i=1;i<=num;i=i+2){
		printf("\n%d",i);
	}
}

