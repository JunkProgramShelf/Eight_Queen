/*
*	Program by JunkProgramShelf
*	2024.5.1
*	Eight Queeen puzzle
*/

#include <stdio.h>
#include <math.h>
#define N 7 
//
int a[10];
int cnt=0;
int flag=0;

int flag2=0;

void queen(int k,int n){
	
	int i,j,l,s,t;
	double judge;
	for(i=0;i<=n;i++){
		for(j=0;j<k;j++){
			if(a[j]==i){
				break;
			}
		}
		if(j==k){
			a[k]=i;
			if(k<n)
				{queen(k+1,n);}
				
			else{
				flag=0;
				for(int x=0;x<=n;x++){
					for(int y=0;y<=n;y++){
						if(x!=y){
							judge=(double)(a[y]-a[x])/(double)(y-x);
							if(judge==1.00||judge==(-1.00))
								{flag++;}
						}
					}
				}if(flag==0){
					printf("No.%6d:",++cnt);
					for(l=0;l<=n;l++){
						printf("%d ",a[l]);
					}printf("\n");
					for(s=0;s<=N;s++){
						for(t=0;t<=N;t++){
							if(s==a[t]){
								printf("");
							}
							else{
								printf(" ");
							}
						}
						printf("\n");
						
					}printf("\n<=============================>\n");
				}
			}
		}
	}
}

int main(){
	int n;
	printf("8*8_Queen_puzzle\n");
	queen(0,N);
	return 0;
}