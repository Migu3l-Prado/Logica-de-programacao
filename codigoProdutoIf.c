#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int codigo;
	printf("digite o c�digo do produto:[1-15] \n");
	scanf("%d",&codigo);
	if(codigo==1){
	printf("Alimento n�o perecivel");
	}else if (codigo >= 2 && codigo <= 4){
		printf("Alimento perecivel");
	}else if (codigo == 5 || codigo == 6 ){
		printf("Vestu�rio");
	}else if (codigo == 7){
		printf("Higiene pessoal");
	}else if (codigo >= 8 && codigo <= 15){
		printf("Limpeza e utens�lios dom�sticos");
	}else {
		printf("Inv�lido");
	}
}

