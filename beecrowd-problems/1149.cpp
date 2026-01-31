//mt60
#include<iostream>
using namespace std;
int main()
{
	//int matriz[8][8];
	int x1,y1,x2,y2;
	int dx,dy;
	//int mov;
	
	do
	{
		x1=0;x2=0;y1=0;y2=0;
		cin>>x1>>y1>>x2>>y2;
		int maiorx=x1,menorx=x2,maiory=y1,menory=y2;
		
		if(x1==0)
		{
			break;
		}
		
		if(x1<x2)
		{
			maiorx=x2;	
			menorx=x1;
		}
		
		if(y1<y2)
		{
			maiory=y2;
			menory=y1;	
		}
		
		dx=maiorx-menorx;
		dy=maiory-menory;
		
		if(dx+dy==0)
		{
			cout<<"0"<<endl;
		}	
		
		else if(dx==dy)//diagonal
		{
			cout<<"1"<<endl;		
		}
		
		else if((dx!=0 && dy==0) || (dx==0 && dy!=0))
		{
			cout<<"1"<<endl;
		}		
		
		else if(dx!=dy)
		{
			cout<<"2"<<endl;
		}
		
		
		
	}while(1);
}
