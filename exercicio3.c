#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int idade,idade1=0,idade2=0,idade3=0,idade4=0,idade5=0,i;
	float media=0;
	
	for(i=1; i < 16 ;i++)
	{
	
	printf("Digite uma idade: ");
	scanf("%d",&idade);
	
	if(idade <= 15){
		idade1++;
	}else if(idade <= 30){
		idade2++;
	}else if(idade <= 45){
		idade3++;
	}else if(idade <= 60){
		idade4++;
	}else{
		idade5++;
	}
	media += idade;
	}
	
	
	
		printf("\ncategoria de até 15 anos: %d", idade1);
		printf("\ncategoria de 16 até 30 anos: %d", idade2);
		printf("\ncategoria de 31 até 45 anos: %d", idade3);
		printf("\ncategoria de 46 até 60 anos: %d", idade4);
		printf("\ncategoria acima de 60 anos: %d", idade5);
		
		printf("\n\na média das idades é : %.2f",media /15 );
}
