#include<stdio.h>
void main(){
	int num;
	printf("Enter the row\n");
	scanf("%d",&num);
	int n;
	for(int i=1; i<=num; i++)
	{
		n=1;	
		for(int j=1; j<=num; j++)
		{
			if(j<i){
				printf("   ");
			}else{
				printf(" %d ",n);
				n++;
			}
		}
		printf("\n");
	}
}
