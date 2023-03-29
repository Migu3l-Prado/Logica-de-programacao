#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int num=2;
	while(num%2==0){
		printf("informe um número: ");
		scanf("%d",&num);
	}
	
}
