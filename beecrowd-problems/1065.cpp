#include<stdio.h>
main(){
	int a,b,c,d,e,par;
	int num;
	int cont = 0;
	for(int i = 0; i < 5; i++){
		scanf("%d", &num);
		if(num % 2 == 0)
		//	cont++;
			cont = cont+1;
	}
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	
	par=0;
	
	if(a%2==0)
		par = par+1;
		
	if(b%2==0)
		par = par+1;
	if(c%2==0)
		par = par+1;
	if(d%2==0)
		par = par+1;
	if(e%2==0)
		par = par+1;
		
	printf("%d valores pares",par);
		
}
