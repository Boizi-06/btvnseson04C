#include <stdio.h>

int main() {
    int so1, so2, so3;
    printf("Nhap vao so thu nhat\n");
    scanf("%d",&so1);
    
    printf("Nhap vao so thu hai\n");
    scanf("%d",&so2);
    
    printf("Nhap vao so thu ba\n");
    scanf("%d",&so3);

    
    if ((so3 > so1 && so3 < so2) || (so3 > so2  && so3 < so1)) {
        printf("so thu ba nam trong khoang giua so thu nhat va so thu hai\n");
    } else {
        printf("so thu ba khong nam nam trong khoang giua so thu nhat va so thu hai\n");
    }

    return 0;
}

