#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	   char opcao;//S ou N
	   char sexo= 'F';
	   printf("digite uma op��o (S/N): ");
	   scanf(" %c",&opcao);// para o "%c" utilizar um espa�o antes do "%" para n�o dar bug
	   printf("opc�o digitada : %s", opcao == 'S'? "Sim" : "N�o");
	   printf("\n sexo digitada : %s", opcao == 'F'? "Feminino" : "Masculino");//utilizar o "%s" porque a resposta tem mais de um character
}
