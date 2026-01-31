//mt25
#include<stdio.h>
int main(){
	double mt[12][12];
	double nmr,r;
	char op;
	int i,j,lin;
	
	scanf("%d",&lin); //linha
	scanf(" %c",&op); //operaçao
	
	
	for(i=0;i<=11;i++){
		for(j=0;j<=11;j++){
			scanf("%lf",&nmr);
			mt[i][j]=nmr;	
		}
	}

	if(op=='M'){
		for(j=0;j<=11;j++){
			r+=mt[lin][j];
			
		}
		r=r/12;
		printf("%.1lf\n",r);
	}
	
	if(op=='S'){
		for(j=0;j<=11;j++){
			r+=mt[lin][j];
		
		}
		printf("%.1lf\n",r);
	}	
		
	return 0;	
	
}
