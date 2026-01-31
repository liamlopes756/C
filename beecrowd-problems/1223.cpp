//mt32
#include<bits/stdc++.h>
/*
#include<iostream>
#include<string>
#include<math.h>
*/
using namespace std; //namespace é um separador
int main(){
	string nmr;
	int i,count,cl;
	//recebe o countloop
	cin >> cl;

	do{
	
		//recebe nmr
		cin >> nmr;
		//contador caractere
		
		i=0; count=0;
		while(nmr[i] != '\0'){
			count++;
			i++;
		}
		//compara 3
		int cone=0,ctwo=0;
		if(count==3){
			//one
			if(nmr[0]=='o') cone++;
			if(nmr[1]=='n') cone++;
			if(nmr[2]=='e') cone++;
			if(cone>=2){
				cout << "1" << endl;
			}	
			//two
			if(nmr[0]=='t') ctwo++;
			if(nmr[1]=='w') ctwo++;
			if(nmr[2]=='o') ctwo++;
			if(ctwo>=2){
				cout << "2" << endl;
			}
		}
		
		//compara 5
		int cthree=0;
		if(count==5){
			//three
			if(nmr[0]=='t') cthree++;
			if(nmr[1]=='h') cthree++;
			if(nmr[2]=='r') cthree++;
			if(nmr[3]=='e') cthree++;
			if(nmr[4]=='e') cthree++;
			if(cthree>=4){
				cout << "3" << endl;
			}
		}
		cl-=1;		
	}
	while(cl>=1);
}

