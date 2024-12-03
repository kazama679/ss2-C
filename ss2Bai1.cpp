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
	int lonNhat = arr[0] ;
	for(int i=1; i<n; i++){
		if(lonNhat<arr[i]){
			lonNhat=arr[i] ;
		} ;
	}
	printf("phan tu lon nhat = %d",lonNhat);
	return 0;
}
