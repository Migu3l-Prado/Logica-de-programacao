#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int codigo;
	
	printf("Digite o código do produto: \n");
	scanf("%d",&codigo);
	
	switch(codigo){
	
	case 1: printf("Alimento não perecivel");break;
	case 2: case 3: case 4: printf("Alimento perecivel");break;
	case 5: case 6:printf("Vestuário");break;
	case 7: printf("Higiene pessoal");break;
	case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: printf("Limpeza e utensílios domésticos");break;
	default: printf("inválido");
	
	
}
	
}
