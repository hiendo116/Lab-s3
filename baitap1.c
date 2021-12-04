#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int A;
	printf("Nhap vao so A :");
	scanf("%d",&A);
	
	if(A>=2 && A<=7){
		printf("Day la Thu %d ",A);
	}else if(A==8){
		printf("Day la Chu Nhat");
	}else{
		printf("Khong phai ngay trong tuan");
	}
	
	
}
