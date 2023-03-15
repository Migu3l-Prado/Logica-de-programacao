#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	   char opcao;//S ou N
	   char sexo= 'F';
	   printf("digite uma opção (S/N): ");
	   scanf(" %c",&opcao);// para o "%c" utilizar um espaço antes do "%" para não dar bug
	   printf("opcão digitada : %s", opcao == 'S'? "Sim" : "Não");
	   printf("\n sexo digitada : %s", opcao == 'F'? "Feminino" : "Masculino");//utilizar o "%s" porque a resposta tem mais de um character
}
