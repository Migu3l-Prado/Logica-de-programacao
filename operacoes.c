/*
Peça para o usuário informar dois números e escolher uma das opções abaixo:

[+] Soma
[-] Subtração
[*] Multiplicação
[/] Divisão

conforme a opção escolhida, calcular e exibir ao final o resultado da operação.
*/
 #include<stdio.h>
 #include<locale.h>
 main(){
 	int opcao;
 	float num1,num2,total;
 	setlocale(LC_ALL,"Portuguese");
 	
 	printf("digite um número: ");
 	scanf("%f",&num1);
 	printf("digite mais um número: ");
 	scanf("%f",&num2);
 	printf("\nEscolha a operação: ");
 	printf("\n 1- [+] soma");
 	printf("\n 2- [-] subtração");
 	printf("\n 3- [*] multiplicação");
 	printf("\n 4- [/] divisão \n ");
 	scanf("\n %d",&opcao);
 	switch(opcao){
 		case 1: total= num1 + num2;break;
 		case 2: total= num1 - num2;break;
 		case 3: total= num1 * num2;break;
 		case 4: total= num1 / num2;break;
 		default: printf("selecione uma opçâo válida! ");resultado = 0;
	 }
	 printf("O resultado da operaçao é %.f", total);
}
 	
 	
 	
