#include <stdio.h>
int main (){
	int a[111],n;
	printf("The Size of thee rry is ");
	scanf("%d",&n);
	
	printf("Entering the arry elliments \n");
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	for (int i=0;i<n;i++){
	   for (int j=i+1;j<n;j++){
	   	if (a[i]==a[j]){
	   		printf("%d is a dyuplicate aaray \n");
		   }
	   }
	}
	
	return 0;
}
