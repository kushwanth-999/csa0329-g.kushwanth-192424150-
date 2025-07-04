#include<stdio.h>
int main() {
	int i=0,j=1,nt;
	int n;
	printf("the fabiocc series");
	scanf("%d",&n); 
	int sum=0;
	for(int k=0;k<=n;k++){
		printf("%d ",i);
		sum=sum+i;
		nt=i+j;
		i=j;
		j=nt;
	}
	printf("the fabari series %d",sum);
	return 0;
}
