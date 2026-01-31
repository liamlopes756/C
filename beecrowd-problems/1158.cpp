//mt16
#include<stdio.h>
main(){
	int rad,av,min,test;
	
	scanf("%d",&test);
	
	for(test; test>0; test--){
		scanf("%d %d",&av,&rad);
		min=av/rad;
		if(av%rad!=0){
		
			min+=1;
		}
		printf("%d\n",min);
	}
}
