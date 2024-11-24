#include<stdio.h>
int main(){
	int thang;
	printf("moi ban nhap vao so thang\n");
	scanf("%d",&thang);
	switch(thang){
		case 1:
			printf("thang mot co 31 ngay\n");
			break;
		case 2:
            printf("thang hai co 28 hoac 29 ngay\n");
            break;
        case 3:
        	 printf("thang ba co 31 ngay\n");
            break;
        case 4:
        	 printf("thang bon co 30 ngay\n");
            break;
        case 5:
            printf("thang nam co 31 ngay\n");
            break;
        case 6:
             printf("thang sau co 30 ngay\n");
            break;
        case 7:
        	 printf("thang bay co 31 ngay\n");
            break;
        case 8:
        	 printf("thang tam co 31 ngay\n");
            break;
        case 9:
        	 printf("thang chin co 30 ngay\n");
            break;
        case 10:
        	 printf("thang muoi co 31 ngay\n");
            break;
        case 11:
            printf("thang muoi mot co 30 ngay\n");
            break;
        case 12:
        	 printf("thang muoi hai co 31 ngay\n");
            break;
        default:
            printf("thang ban nhap khong dung\n");   
	}
	return 0;
}
