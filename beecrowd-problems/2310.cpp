//mt18
#include<stdio.h>
int main(){
	int i,nmr,vit;
	vit=0;
	scanf("%d",&i);
	for(i;i>0;i--){
		scanf("%d",&nmr);
		if(nmr>1){
			vit+=1;
		}
	}
	printf("%d\n",vit);
	
	return 0;
}
