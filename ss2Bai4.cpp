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
	int a; 
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
		 	if(arr[i]>arr[j]){
		 		a=arr[i];
				arr[i]=arr[j];
				arr[j]=a;
			} 
		}
	}
	printf("mang tang dan: ");
	for(int i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
