#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num1,num2;
	char op ='s'; 
	
	while(op != 'n' && op != 'N'){// op sendo a op�ao s , para s� parar de rodar o programa caso o usuario digite N && n,lembre-se que diferente aqui � !=
		printf("digite um n�mero: ");
		scanf("%d",&num1);
		printf("digite um n�mero: ");
		scanf("%d",&num2);
		printf("A soma dos dois n�meros � %d. \n", num1 + num2);
		printf("deseja continuar? (S/N): ");
		scanf(" %c",&op);
	
    	}
	}
