#include<stdio.h>
#include<math.h>
main(){
	double x,y,r,b,c,n,i;
	scanf("%lf",&n);
	
	for(i=0;i<n;i++){
	
		scanf("%lf %lf",&x,&y);
		r=pow(3*x,2)+pow(y,2);
		b=2*pow(x,2)+pow(5*y,2);
		c=-100*x+pow(y,3);
		
		if(r>b && r>c){
			printf("Rafael ganhou\n");
		}
		
		if(b>r && b>c){
			printf("Beto ganhou\n");
		}
		if(c>r && c>b){
			printf("Carlos ganhou\n");
		}
	}
}
