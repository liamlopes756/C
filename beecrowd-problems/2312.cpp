//mt15
#include<stdio.h>
int main(){
	int nmr1,nmr2,soma,i,j;
	
	scanf("%d", &i);
	
	for(j=1;j<=i;j++){
	
	scanf("%d %d",&nmr1,&nmr2);
	soma=nmr1+nmr2;
	switch(soma){
		case 0:
			printf("PROXYCITY");
			break;
		case 1:
			printf("P.Y.N.G");
			break;
		case 2:
			printf("DNSUEY!");
			break;
		case 3:
			printf("SERVERS");
			break;
		case 4:
			printf("HOST!");
			break;
		case 5:
			printf("CRIPTONIZE");
			break;
		case 6:
			printf("OFFLINE DAY");
			break;
		case 7:
			printf("SALT");
			break;
		case 8:
			printf("ANSWER!");
			break;
		case 9:
			printf("RAR?");
			break;
		case 10:
			printf("WIFI ANTENNAS");
			break;
		
	}
	printf("\n");
}
	
	return 0;
}
