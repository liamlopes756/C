#include<stdio.h>

#include<bits/stdc++.h>
using namespace std;

int main(){
	int senha;
	
	while(1){
		
		printf("digite a senha: ");
		scanf("%d",&senha);
		
		if(senha==2002){
		
			printf("Acesso Permitido\n");
			break;
		}
	
		printf("Senha Invalida\n");
			
	}
	
	return 0;
}
