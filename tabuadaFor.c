#include<stdio.h>


main(){
int A,i;

printf("digite um numero inteiro:");
scanf("%d",&A);

for(i=1; i<=10; i=i+2){ //i ++ utilizado quando quer ir de um em um, =   i+i
printf("\n%d * %d = %d",A,i,A*i);

}
}
