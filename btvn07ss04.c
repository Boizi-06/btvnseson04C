#include<stdio.h>
int main(){
	int nam;
	printf("moi ban nhap vao so nam muon kiem tra\n");
	scanf("%d",&nam);
	if((nam%400==0)||(nam%4==0&&nam%100!=0)){
		printf("nam %d vao la nam nhuan\n",nam);
		
	}else{
		printf("nam %d vao khong phai la nam nhuan",nam);
	}
	return 0;

}
