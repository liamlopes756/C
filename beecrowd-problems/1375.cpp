//mt42
#include<iostream>
#include<stdbool.h>
using namespace std;

int main(){
	int estrelas,i;
	float atk,roubos,totalcarneiros;
	
	//nmr estrelas
	cin>>estrelas;
	long int carneiros[estrelas];
	bool visitado[estrelas];
	//nmr de carneiros
	i=0; totalcarneiros=0;
	while(i<estrelas){
		cin>>carneiros[i];
		visitado[i]=true;
		totalcarneiros+=carneiros[i];
		i++;
	}
	//contar quantas estrelas andou
	i=0; atk=0; roubos=0;
	while (i >= 0 && i < estrelas && carneiros[i] > 0){
		if(carneiros[i]%2!=0){
			carneiros[i]-=1;
			if(visitado[i]){
				atk++;
				visitado[i]=false;
			}
			i++;
			
			
			roubos++;
		}
		else{
			carneiros[i]-=1;
			if(visitado[i]){
				atk++;
				visitado[i]=false;
			}
			i--;
			roubos++;
		}
	}
	cout<<atk<<" "<<totalcarneiros-roubos<<endl;
	
}
