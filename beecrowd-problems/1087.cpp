//mt30
//1 jogador 2 pokemon 0 demais
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
	int mt[100][100],n,m,i,j;
	int a,b,c,d,dist;
	
	
	while(scanf("%d %d", &n, &m) != EOF){ 	//end of file
											//ctrl z enter
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				scanf("%d",&mt[i][j]);
				if(mt[i][j]==1){
					a=i;
					b=j;
				}
				if(mt[i][j]==2){
					c=i;
					d=j;
				}
			}
		}
	dist=abs(a-c)+abs(b-d);	
	printf("\n%d\n",dist);
	}
}
