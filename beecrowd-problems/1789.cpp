//mt11
#include<stdio.h>
main(){
	int cv,ce,cs,fv,fe,fs;
	scanf("%d %d %d %d %d %d",&cv,&ce,&cs,&fv,&fe,&fs);
	
	if(cv*3+ce>fv*3+fe)
		printf("C\n");
	if(cv*3+ce<fv*3+fe)
		printf("F\n");
	if(cv*3+ce==fv*3+fe){
	
		if(cs>fs)
			printf("C\n");
		if(fs>cs)
			printf("F\n");
		if(cs==fs)
			printf("=\n"); 
	}
}
