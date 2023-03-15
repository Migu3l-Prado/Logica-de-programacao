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
	  	printf("Triãngulo equilátero");
	  }else if(A==B || A==C || B==C){
	  	printf("Triângulo isósceles. ");
	  }else{
	  	printf("Triângulo escaleno.");
	  }
	  }else{
	  	printf("Os lados informados não formam um triângulo");
	  }
	}
