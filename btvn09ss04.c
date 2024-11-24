#include<stdio.h>
int main(){
	int ngay,thang,nam,ngaytoida;
	printf("moi ban nhap vao so ngay\n");
	scanf("%d",&ngay);
	printf("moi ban nhap vao so thang\n");
	scanf("%d",&thang);
	printf("moi ban nhap vao so nam\n");
	scanf("%d",&nam);

	
	if(thang==2){
		if((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)){
			ngaytoida=29;
			
		}else{
			ngaytoida=28;
		}
	}
	
		
	if(thang == 4 || thang == 6 || thang == 9 || thang == 11){
		ngaytoida=30;
	}
	if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12){
		ngaytoida=31;
		
	}
	
	
	if(thang<1||thang>12){
		printf("ban da nhap sai so thang\n");
	
	}
	if(nam<0){
		printf("ban da nhap sai so nam\n");
	
	}
	if(ngay < 1 || ngay > ngaytoida){
		printf("ban da nhap sai so ngay\n");
	}else{
		printf("%d/%d/%d\n",ngay,thang,nam);
	}
	return 0;
}
