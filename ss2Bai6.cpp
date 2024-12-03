#include<stdio.h>

int main(){
	int n,m;
	printf("nhap vao n cho arr = ", n);
	scanf("%d", &n);
	
	printf("nhap vao m cho arr 2 = ", m);
	scanf("%d", &m);
	if(n<=0||n>1000){
		printf("yeu cau nhap n so lon hon 0 va nho hon 100");
		return 0;
	} 
	if(m<=0||m>1000){
		printf("yeu cau nhap m so lon hon 0 va nho hon 100");
		return 0;
	} 
	
	int arr[n];
	for(int i=0; i<n; i++){
		printf("phan tu thu nhat arr[%d] = ",i);
		scanf("%d", &arr[i]);
	}
	
	int arr2[m];
	for(int i=0; i<m; i++){
		printf("phan tu thu nhat arr2[%d] = ",i);
		scanf("%d", &arr2[i]);
	}
	
	int result[n+m];
	for(int i=0; i<n;i++){
		result[i]=arr[i];
	} 
	for(int j=n; j<n+m;j++){
		result[j]=arr2[j-n];
	}
	
	printf("mang sau khi gop: ") ;
	for(int i=0; i<n+m;i++){
		printf("%d ", result[i]);
	}
	
	return 0;
}

