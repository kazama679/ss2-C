#include<stdio.h>

int main(){
	int n,x;
	printf("nhap vao n cho arr = ", n);
	scanf("%d", &n);
	
	printf("nhap vao x = ", x);
	scanf("%d", &x);
	if(n<=0||n>100){
		printf("yeu cau nhap so lon hon 0 va nho hon 100");
		return 0; 
	} 
	
	int arr[n];
	for(int i=0; i<n; i++){
		printf("phan tu thu nhat arr[%d] = ",i);
		scanf("%d", &arr[i]);
	}
	int lanXuatHien = 0;
	for(int i=0; i<n; i++){
		if(x==arr[i]){
			lanXuatHien++;
		} ;
	}
	printf("so lan xuat hien = %d",lanXuatHien);
	return 0;
}
