#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"portuguese");
	int dia; //1 a 7
	printf("digite um número de 1 a 7: ");
	scanf("%d",&dia);
	switch(dia){
		case 1: printf("domingo"); break;
		case 2: printf("Segunda-Feira"); break;
		case 3: printf("Terça-Feira"); break;
		case 4: printf("Quarta-Feira"); break;
		case 5: printf("Quinta-Feira"); break;
		case 6: printf("Sexta-Feira"); break;	
		case 7: printf("Sábado"); break;
		default: printf("Número Inválido");
	  }
    }
