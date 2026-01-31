//mt24
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int b,p,n,i,tab;
	
	scanf("%d",&n);
	
	tab=pow(n,2);
	
	if(n==2){
		printf("2 casas brancas e 2 casas pretas\n");
		exit(0);
	}
	if(n>2){
		for(i=3;i<=n;i++){
			p=tab/2;
			b=(tab/2)+tab%2;
		}
	}
	printf("%d casas brancas e %d casas pretas\n",b,p);
}

/*
3x3 4p 5b
4x4 8p 8b
5x5 13p 12b
6x6 18p 18b
*/
