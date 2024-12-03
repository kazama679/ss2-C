#include <stdio.h>

int main() {
    int n;
    printf("Nhap vao n cho arr: ");
    scanf("%d", &n);

    if (n <= 0 || n > 1000) {
        printf("Yeu cau nhap so lon hon 0 va nho hon 1000.\n");
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    int check = arr[0];
    int maxCount = 1;

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            check = arr[i];
        }
    }

    printf("So xuat hien nhieu nhat trong mang la: %d\n", check);

    return 0;
}

