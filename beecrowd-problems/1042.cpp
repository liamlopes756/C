//mt13
#include<stdio.h>
main(){
	int nmr1,nmr2,nmr3,p,s,t;
	scanf("%d %d %d", &nmr1,&nmr2,&nmr3);
	
	if(nmr1<nmr2 && nmr1<nmr3){
		p=nmr1;
	}
	
	if(nmr2<nmr1 && nmr2<nmr3){
		
		p=nmr2;
	}
	if(nmr3<nmr1 && nmr3<nmr2){
		p=nmr3;
	}
	
	
	if(nmr1>nmr2 && nmr1>nmr3){
		t=nmr1;
	}
	
	if(nmr2>nmr1 && nmr2>nmr3){
		
		t=nmr2;
	}
	if(nmr3>nmr1 && nmr3>nmr2){
		t=nmr3;
	}
	
	
	if(nmr1!=p && nmr1 != t){
		s=nmr1;
	}
	if(nmr2!=p && nmr2 != t){
		s=nmr2;
	}
	if(nmr3!=p && nmr3 != t){
		s=nmr3;
	}
	
	
	printf("%d\n%d\n%d\n\n",p,s,t);
	printf("%d\n%d\n%d\n\n",nmr1,nmr2,nmr3);
}
