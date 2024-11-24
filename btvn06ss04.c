#include<stdio.h>
int main(){
	int num1,num2,num3,num4,num5;
	printf("moi ban nhap vao so dien thang truoc\n");
	scanf("%d",&num1);
	printf("moi ban nhap vao so dien thang nay\n");
	scanf("%d",&num2);
	num3=num2-num1;
	if(num1>num2){
		printf("ban da nhap sai so dien\n");
	}else{
		if(0<=num3&&num3<50){
		num4 = 10000;
	}
	    if(50<=num3&&num3<100){
		num4=15000;
	}
	    if(100<=num3&&num3<200){
	    num4=20000;
	}
	    if(150<=num3&&num3<200){
		num4=25000;
	
	}
	    if(200<=num3){
		num4=30000;
	}
	num5=num3*num4;
	printf("so tien dien trong thang qua cua ban la %d\n",num5);
	
	}
	
	return 0;
}
