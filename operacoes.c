/*
Pe�a para o usu�rio informar dois n�meros e escolher uma das op��es abaixo:

[+] Soma
[-] Subtra��o
[*] Multiplica��o
[/] Divis�o

conforme a op��o escolhida, calcular e exibir ao final o resultado da opera��o.
*/
 #include<stdio.h>
 #include<locale.h>
 main(){
 	int opcao;
 	float num1,num2,total;
 	setlocale(LC_ALL,"Portuguese");
 	
 	printf("digite um n�mero: ");
 	scanf("%f",&num1);
 	printf("digite mais um n�mero: ");
 	scanf("%f",&num2);
 	printf("\nEscolha a opera��o: ");
 	printf("\n 1- [+] soma");
 	printf("\n 2- [-] subtra��o");
 	printf("\n 3- [*] multiplica��o");
 	printf("\n 4- [/] divis�o \n ");
 	scanf("\n %d",&opcao);
 	switch(opcao){
 		case 1: total= num1 + num2;break;
 		case 2: total= num1 - num2;break;
 		case 3: total= num1 * num2;break;
 		case 4: total= num1 / num2;break;
 		default: printf("selecione uma op��o v�lida! ");resultado = 0;
	 }
	 printf("O resultado da opera�ao � %.f", total);
}
 	
 	
 	
