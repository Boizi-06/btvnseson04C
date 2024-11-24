#include<stdio.h>
int main(){
	int canh1,canh2,canh3;
	printf("moi ban nhap vao cnah thu nhat\n");
	scanf("%d",&canh1);
	printf("moi ban nhap vao cnah thu hai\n");
	scanf("%d",&canh2);
	printf("moi ban nhap vao cnah thu ba\n");
	scanf("%d",&canh3);
	if((canh1+canh2>canh3)&&(canh1+canh3>canh2)&&(canh2+canh3>canh1)){
		printf("ba canh tren la ba canh cua tam giac\n");
		
	}else{
		printf("ba canh tren khong phai la ba canh cua ta giac\n");
	}
	return 0;
}
