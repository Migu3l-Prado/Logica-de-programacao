#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int op,num,fatorial,i;
	
	do{
		system("cls");
		printf("\n###### MENU DE OP��ES ######\n ");
		printf("\n 1- calcular o fatorial ");
		printf("\n 2- calcular a pot�ncia ao cubo ");
		printf("\n 0- sair ");
		printf("\n######################");
		printf("\nOp��o: ");
		scanf("%d",&op);
		switch(op){
			case 1:
				printf("\n 1- calcule fatorial");
				printf("\n digite um n�mero: ");
				scanf("%d",&num);
				fatorial=1;
				for(i=num;i>=1;i--){
				fatorial = fatorial * i;
				}
				printf("\n%d! � igual a %d.\n\n",num,fatorial);
				system("pause");
				break;
					
			case 2:
				printf("\n 2- calcule a pot�ncia ao cubo");
				printf("\n digite um n�mero: ");
				scanf("\n%d",&num);
				printf("\n%d� � igual %d \n ",num,num*num*num);
				system("pause");
				break;
				
			case 0: break;	
			default: printf("Op��o invalida!, s� � permitido duas op��es 1 e 2 ");
				}		
		}
	while(op  != 0);
	 }
	

	
	


