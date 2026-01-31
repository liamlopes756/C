#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,n,tam;
	char nmr[1000000];
	
	cin>>nmr;
	n=0;
	
	tam=0; i=0;
	while(nmr[i]!='\0'){
		tam++;
		i++;
	}
	
	i=1;
	while(tam>1 && n<1){
		if(nmr[i-1]=='1' && nmr[i]=='3'){
			n+=1;
		}
		tam--;
		i++;
	}
	if(n==1){
		cout<<nmr<<" es de Mala Suerte"<<endl;
	}
	if(n<1){
		cout<<nmr<<" NO es de Mala Suerte"<<endl;
	}
	return 0;
}
