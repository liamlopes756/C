//0,1,1,2,3,5,8,13,21,34,55

#include<bits/stdc++.h>

int main(){
 int nmr,a,b;
	scanf("%d", &nmr);
	
	a=0;
	b=1;
	
	if(nmr<0 || nmr>46){
		exit(0);
		
	}
	
	printf("%d ",a);
	if(nmr>=1)
		printf("%d ",b);
	
	while(1){
		
		
		if (nmr>a && nmr>b){
		
			a=a+b;
			printf("%d ",a);
		
		}
		if(nmr<a+b){
		
			break;
		}
		
		if (nmr>a && nmr>b){
			b=a+b;
			printf("%d ",b);
		
		}
		if (nmr<a+b)
			break;
	}
	
	printf("\n");	
 
    return 0;
	
	
	
}
