#include <stdio.h>

int main(void)
{
	int i,no;
	
	printf("请输入一个整数：");
	scanf("%d",&no); 
	
	i=0;
	while(i<no){
		printf("%3d",i=i+2);
	}
	
	return 0; 
 } 
