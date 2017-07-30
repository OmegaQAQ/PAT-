#include<stdio.h>
int main(){
	int i,j;
	int num[8]={10,15,12,3,4,13,1,15};
	int N=8;
	int tmp=0;
	
	for (i=0;i<N;i++){
		for (j=i+1;j<N;j++){
			if (num[i]>num[j]){
				tmp =num[i];
				num[i]=num[j];
				num[j]=tmp;
				
			} 
		}
	}
	
	for(i=0;i<N;i++){
		printf("%d ",num[i]);
	}
	printf("\n");
	
	for(i=1,tmp=num[0];i<N;i++){
		tmp = (tmp+num[i])/2;	
	}
	printf("%d",tmp);
}
