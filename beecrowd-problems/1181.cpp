//mt26
#include<stdio.h>
int main(){
	double mt[12][12];
	double nmr,r;
	int i,j,cln;
	char op; // s m
	
	r=0;
	
	scanf("%d",&cln);
	scanf(" %c",&op);
	
	for(i=0;i<=11;i++){
		for(j=0;j<=11;j++){
			scanf("%lf",&nmr);
			mt[i][j]=nmr;
		}
	}
	
	if(op=='S'){
		for(i=0;i<=11;i++){
			r+=mt[i][cln];
		}
	}
	
	if(op=='M'){
		for(i=0;i<=11;i++){
			r+=mt[i][cln];
		}
		r=r/12;
	}
	printf("%.1lf\n",r);
	
	return 0;
	
}
