#include<stdio.h>

int main(){
	int n;
	printf("nhap vao n cho arr = ", n);
	scanf("%d", &n);
	if(n<=0||n>100){
		printf("yeu cau nhap so lon hon 0 va nho hon 100");
		return 0; 
	} 
	
	int arr[n];
	for(int i=0; i<n; i++){
		printf("phan tu thu nhat arr[%d] = ",i);
		scanf("%d", &arr[i]);
	}
	int mangDaoNguoc[n];
	for(int i=0; i<n; i++){
		mangDaoNguoc[i]=arr[n-i-1];
	}
	printf("mang dao nguoc:");
	for(int i=0; i<n; i++){
		printf("%d ",mangDaoNguoc[i]);
	}
	return 0;
}
