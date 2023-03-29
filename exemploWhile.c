#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num1,num2;
	char op ='s'; 
	
	while(op != 'n' && op != 'N'){// op sendo a opçao s , para só parar de rodar o programa caso o usuario digite N && n,lembre-se que diferente aqui é !=
		printf("digite um número: ");
		scanf("%d",&num1);
		printf("digite um número: ");
		scanf("%d",&num2);
		printf("A soma dos dois números é %d. \n", num1 + num2);
		printf("deseja continuar? (S/N): ");
		scanf(" %c",&op);
	
    	}
	}
