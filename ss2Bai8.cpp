#include<stdio.h>

int main(){
	int n, sum, all;
	printf("nhap vao n cho arr = ", n);
	scanf("%d", &n);
	if(n<=0||n>1000){
		printf("yeu cau nhap so lon hon 0 va nho hon 1000");
		return 0; 
	} 
	
	int arr[n];
	for(int i=0; i<n-1; i++){
		printf("phan tu thu nhat arr[%d] = ",i);
		scanf("%d", &arr[i]);
	}
	
	// tong cac so trong arr
	for(int i=0; i<n-1; i++){
		sum+=arr[i]; 
	}
	// tong arr theo cong thuc
	all = n * (n+1)/2;
	printf("so con thieu: %d", all-sum);
	return 0; 
}
