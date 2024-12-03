#include <stdio.h>
#include <stdlib.h>

void hamXoa(int **pArray, int *n, int k) {
	// tien hanh di xoa
	int check=0; 
    for (int i = 0; i < *n; i++) {
    	if((*pArray)[i]==k){
    		for(int j=i; j<*n-1;j++){
    			(*pArray)[j]=(*pArray)[j+1];
			}
			*n--;
			*pArray = (int*) realloc(*pArray, (*n) * sizeof(int));
			check++;
		}
    }
    if(check!=0){
	    printf("mang sau khi da xoa: "); 
	    for (int i = 0; i < *n; i++) {
	        printf("%d ", (*pArray)[i]);
	    }
	} else{
		printf("khong tim thay phan tu can xoa");
	} 
}

int main() {
    int *arr = NULL;
    int n, k;

    printf("Nhap n la so phan tu mang: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("yeu cau nhap so lon hon 0 va nho hon 100.\n");
        return 0;
    }

    // cap phat bo nho cho mang
    arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("loi khi cap phat bo nho.\n");
        return 0;
    }

    // nhap cac phan tu vao mang
    for (int i = 0; i < n; i++) {
        printf("phan tu thu %d arr[%d] = ", i + 1, i);
        scanf("%d", &arr[i]);
    }

    // in mang ra man hinh
    printf("mang da nhap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // nhap phan tu can xoa
    printf("Nhap phan tu can xoa: ");
    scanf("%d", &k);

    // goi ham xoa phan tu
    hamXoa(&arr, &n, k);

    // giai phong bo nho
    free(arr);

    return 0;
}
