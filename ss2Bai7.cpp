#include<stdio.h>

int main(){
	int n, k;
	printf("nhap vao n cho arr = ");
	scanf("%d", &n);
	if(n<=0||n>1000){
		printf("yeu cau nhap so lon hon 0 va nho hon 1000");
		return 0; 
	} 
	
	int arr[n];
	for(int i=0; i<n; i++){
		printf("phan tu thu nhat arr[%d] = ",i);
		scanf("%d", &arr[i]);
	}
	printf("nhap vao k = ");
	scanf("%d", &k);
	
	for(int i=0;i<n-1;i++){
		if(arr[i]+arr[i+1]==k){
			printf("cap so co tong = %d la: %d %d", k, arr[i], arr[i+1]);
			return 0;
		} 
	} 
	printf("khong co cap so nao co tong = %d", k); 
	return 0;
}
