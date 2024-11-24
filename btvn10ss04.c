#include<stdio.h>
int main(){
	int num1,num2,num3;
	printf("moi ban nhap vao so thu nhat\n");
	scanf("%d",&num1);
	printf("moi ban nhap vao so thu hai\n");
	scanf("%d",&num2);
	printf("moi ban nhap vao so thu ba\n");
	scanf("%d",&num3);
	if(num1 <= num2 && num1 <= num3){
		if(num2<=num3){
			printf("%d,%d,%d\n",num1,num2,num3);
			
		}else{
			printf("%d,%d,%d\n",num1,num3,num2);
		}
	}
    if(num2<=num1&&num2<=num3){
    	if(num1>num3){
    		printf("%d,%d,%d\n",num2,num3,num1);
    		
		}else{
			printf("%d,%d,%d\n",num2,num1,num3);
		}
	}   
    if(num3<=num2&&num3<=num1){
    	if(num1>num2){
    		printf("%d,%d,%d\n",num3,num2,num1);
		}else{
			printf("%d,%d,%d\n",num3,num1,num2);
		}
	}
	return 0;
}
