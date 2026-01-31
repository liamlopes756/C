//mt22
#include<stdio.h>
#include<stdlib.h>
int main(){
	double a,b,aux,i,n,count;
	n=0;
	a=1;
	b=0;
	aux=0;
	
	scanf("%lf",&count);
	
	do{
		scanf("%lf",&i);
		if(i==0){
			printf("Fib(%.0lf) = %.0lf\n",i,b);
		}
		if(i==1){
			printf("Fib(%.0lf)= %.0lf\n",i,a);
		
		}
		if(i>=2){
			for(n=2;n<=i;n++){
			aux=a+b;
			b=a;
			a=aux;	
			}
			printf("Fib(%.0lf) = %.0lf\n",i,aux);	
		}
		
		a=1;
		b=0;
		aux=0;
		count-=1;
	}
	while(count!=0);
	
	
	
}
