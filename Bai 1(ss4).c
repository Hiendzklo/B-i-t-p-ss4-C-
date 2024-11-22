#include <stdio.h>
int main(){
	int A;
	printf("Nhap mot so nguyen:");
	scanf("%d",&A);
	
	if(A>0){
		printf("Day la so nguyen duong");
	}
	else if(A<0){
		printf("Day la so nguyen am");
	}
	else
		printf("Day la so 0");
}
