#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int A,B,C;
		
	printf("informe o lado:");
	scanf("%d",&A);
	printf("informe o lado:");
	scanf("%d",&B);
    printf("informe o lado:");
	scanf("%d",&C);
	if(A<B+C && B<A+C && C<A+B){
	  if(A==B && B==C){
	  	printf("Tri�ngulo equil�tero");
	  }else if(A==B || A==C || B==C){
	  	printf("Tri�ngulo is�sceles. ");
	  }else{
	  	printf("Tri�ngulo escaleno.");
	  }
	  }else{
	  	printf("Os lados informados n�o formam um tri�ngulo");
	  }
	}
