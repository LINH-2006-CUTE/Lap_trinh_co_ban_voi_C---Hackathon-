#include<stdio.h>

int main() {
    int choice;
    int n = 0;
    int arr[100];

    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu va gia tri cho mang\n");
        printf("2. In ra cac phan tu trong mang\n");
        printf("3. So phan tu chan va le trong mang\n");
        printf("4. Gia tri lon thu hai trong mang\n");
        printf("5. Nhap phan tu moi vao mang\n");
        printf("6. Chon phan tu can xoa\n");
        printf("7. Mang sap xep theo thu tu giam dan (Insertion Sort)\n");
        printf("8. Nhap mot phan tu va kiem tra vi tri cua no\n");
        printf("9. So nguyen to trong mang\n");
        printf("10. Mang sap xep theo thu tu giam dan (Bubble Sort)\n");
        printf("11. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("\nNhap so phan tu cua mang (toi da 100): ");
                scanf("%d", &n);
                if (n > 100 || n <= 0) {
                    printf("So phan tu khong hop le. Vui long nhap lai.\n");
                } else {
                    printf("Nhap gia tri cho cac phan tu trong mang:\n");
                    for (int i = 0; i < n; i++) {
                        printf("Phan tu arr[%d]: ", i);
                        scanf("%d", &arr[i]);
                    }
                }
                break;
            }

            case 2: {
                printf("\nCac phan tu trong mang la:\n");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }

            case 3: {
                int even = 0, odd = 0;
                for (int i = 0; i < n; i++) {
                    if (arr[i] % 2 == 0)
                        even++;
                    else
                        odd++;
                }
                printf("\nSo phan tu chan: %d\n", even);
                printf("So phan tu le: %d\n", odd);
                break;
            }

            case 4: {
                if (n < 2) {
                    printf("Mang phai co it nhat 2 phan tu.\n");
                } else {
                    int max = arr[0], max2 = -2147483648;
                    for (int i = 1; i < n; i++) {
                        if (arr[i] > max) {
                            max2 = max;
                            max = arr[i];
                        } else if (arr[i] > max2 && arr[i] != max) {
                            max2 = arr[i];
                        }
                    }
                    if (max2 == -2147483648) {
                        printf("Khong co gia tri lon thu hai.\n");
                    } else {
                        printf("Gia tri lon thu hai trong mang la: %d\n", max2);
                    }
                }
                break;
            }

            case 5: {
                if (n >= 100) {
                    printf("Mang da day. Khong the them phan tu moi.\n");
                } else {
                    int newElement;
                    printf("Nhap gia tri phan tu moi: ");
                    scanf("%d", &newElement);
                    arr[n++] = newElement;
                    printf("Them thanh cong!\n");
                }
                break;
            }

            case 6: {
                int index;
                printf("Nhap vi tri phan tu can xoa (0 - %d): ", n - 1);
                scanf("%d", &index);
                if (index < 0 || index >= n) {
                    printf("Vi tri khong hop le.\n");
                } else {
                    for (int i = index; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Xoa thanh cong!\n");
                }
                break;
            }

            case 7: {
                for (int i = 1; i < n; i++) {
                    int key = arr[i];
                    int j = i - 1;
                    while (j >= 0 && arr[j] < key) {
                        arr[j + 1] = arr[j];
                        j--;
                    }
                    arr[j + 1] = key;
                }
                printf("Mang sau khi sap xep giam dan (Insertion Sort):\n");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }

            case 8: {
                int search, found = 0;
                printf("Nhap phan tu can tim: ");
                scanf("%d", &search);
                for (int i = 0; i < n; i++) {
                    if (arr[i] == search) {
                        printf("Phan tu %d xuat hien tai vi tri %d.\n", search, i);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("Khong tim thay phan tu %d trong mang.\n", search);
                }
                break;
            }

            case 9: {
                int count = 0;
                int b
    				if (b <= 1) {
        				printf("%d khong phai la so nguyen to.\n", b);
 					   }
    
    			for (int i = 2; i * i <= b; i++) {
        			if (a % i == 0) {
            			printf("%d khong phai la so nguyen to.\n", b);
            
        			}
  				  }
    
    				printf("%d la so nguyen to.\n", a);
                
                break;
            }

            case 10: {
                for (int i = 0; i < n - 1; i++) {
                    for (int j = 0; j < n - i - 1; j++) {
                        if (arr[j] < arr[j + 1]) {
                            int temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }
                printf("Mang sau khi sap xep giam dan (Bubble Sort):\n");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }

            case 11:
                printf("Thoat \n");
                break;

            default:
                printf("  thu lai\n");
        }
    } while (choice != 11);

    return 0;
}

