#include <stdio.h>
int main (){
	int reg[111],n;
	int real;
	printf("Enter the size of array ");
	scanf("%d",&n);
	printf("\nEnter the reg to find ");
	scanf("%d",&real);
	
	for (int i=0;i<n;i++){
		scanf("%d",&reg[i]);
	}
	for (int i=0;i<n;i++){
		if (reg[i]==real){
			printf("THe reg number searched is %d ",reg[i]);
		}
	}
	return 0;
}
