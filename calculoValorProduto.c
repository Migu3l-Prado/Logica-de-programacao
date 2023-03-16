/*
 Faça um programa em C que receba o valor de um produto e a porcentagem conforme o menu abaico:
 
 1- [15%]
 2- [20%]
 3- [30%]
 
 ao final, exiba o valor do produto com o acréscimo selecionado.
 
 */
 #include<stdio.h>
 #include<locale.h>
 main(){
 	int opcao;
 	float valor;
 	setlocale(LC_ALL,"Portuguese");
 	
 	printf("digite o valor: ");
 	scanf("%f",&valor);
 	printf("1 - [15%%]\n");
   	printf("2 - [20%%]\n");
	printf("3 - [30%%]\n");
	printf("opcâo? ");
	scanf("%d",&opcao);
	switch(opcao){
		case 1: valor = valor*1.15;break;//valor * = 1.15;
		case 2: valor = valor*1.20;break;
		case 3: valor = valor*1.30;break;
		default:printf("Opção invalida! ");
	} 
	printf("Valor final do produto: %.2f",valor);
}
 	
 	
 	
 
