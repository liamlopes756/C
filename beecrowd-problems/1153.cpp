//mt09
#include<stdio.h>
main(){
	int nmr,fat;
	fat=1;
	scanf("%d",&nmr);
	
	for(nmr; nmr>1; nmr--){
		fat=nmr*fat;	
	}
	printf("%d", fat);
}
