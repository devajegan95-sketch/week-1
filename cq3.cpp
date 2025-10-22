#include<stdio.h>
int main(){
	int a,pcount=0,ncount=0,zcount=0;
	scanf("%d",&a);
	if(a<0){
		ncount+=1;
	}
	else if (a>0){
		pcount+=1;
	} 
	else{
		zcount+=1;
	}
	printf("ncount:%d\n",ncount);
	printf("pcount:%d\n",pcount);
	printf("zcount:%d\n",zcount);
}