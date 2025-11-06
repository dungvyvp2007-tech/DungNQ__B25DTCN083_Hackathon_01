#include<stdio.h>

int main(){
	int arr[100];
	int n = 0;     
    int choice;     
    int i, j, temp; 
    int  min; 
    int value, index;
    int sorted = 0;
    int isPrime;
    int maxIndex;
    
	
	do{
		printf("\n****************MENU*******************\n");
		printf("\n1.Nhap so luong phan tu va gia tri tung phan cho mang");
		printf("\n2.In ra gia tri cac phan tu trong mang");
		printf("\n3.In ra cac so nguyen to trong mang");
		printf("\n4.Tim gia tri nho nhat trong mang");
		printf("\n5.Them mot phan tu vao vi tri cu the");
		printf("\n6.Xoa phan tu tai mot vi tri cu the");
		printf("\n7.Sap xep mang theo thu tu tang dan(Selection sort)");
		printf("\n8.Kiem tra su ton tai cua phan tu co trong mang");
		printf("\n9.In mang sao cho toan bo so le dung truoc , so chan dung sau nhung khong lam thay doi thu tu so chan le ban dau");
		printf("\n10.Sap xep mang theo thu tu nguoc lai\n");
		printf("\n**************************************");
		printf("\nVui long nhap lua chon :");
		scanf("%d",&choice);
		
		
		switch(choice){
            case 1:
                printf("Nhap so phan tu n (toi da 100): ");
                scanf("%d", &n);
                if (n <= 0 || n > 100) {
                    printf("So phan tu khong hop le!\n");
                    n = 0;
                    break;
                }
                for (i = 0; i < n; i++) {
                    printf("arr[%d] = ", i);
                    scanf("%d", &arr[i]);
                }
                sorted = 0;
                break;

            case 2:
                if (n == 0) {
                    printf("Mang rong, vui long nhap gia tri cho mang!\n");
                } else {
                    printf("Cac phan tu cua mang: ");
                    for (i = 0; i < n; i++)
                        printf("%d ", arr[i]);
                    printf("\n");
                }
                break;
			case 3:
			    if (n == 0) {
			        printf("Mang rong, vui long nhap gia tri cho mang!\n");
			    } else {
			        printf("Cac so nguyen to trong mang la: ");
			        for (i = 0; i < n; i++) {
			            if (arr[i] < 2) continue;
			            isPrime = 1;
			            for (j = 2; j * j <= arr[i]; j++) {
			                if (arr[i] % j == 0) {
			                    isPrime = 0;
			                    break;
			                }
			            }
			            if (isPrime) {
			                printf("%d ", arr[i]);
			            }
			        }
			        printf("\n");
			    }
			    break;
	 		case 4:
	 			if(n==0){
	 				printf("Mang rong , vui long nhap gia tri cho mang !\n");
				}else{
					min = arr[0];
					for(i=0;i<n;i++){
						if (arr[i]<min){
							arr[i]=min;
						}
					}
					printf("Gia tri nho nhat trong mang :%d",min);
				}
				break;
			case 5:
	 			if(n==0){
	 				printf("Mang rong , vui long nhap gia tri cho mang !\n");
                    break;
                }
                printf("Nhap chi so muon chen (0->%d): ", n);
                scanf("%d", &index);
                printf("Nhap gia tri can chen: ");
                scanf("%d", &value);
                if (index < 0 || index > n) {
                    printf("Chi so khong hop le!\n");
                } else {
                    for (i = n; i > index; i--)
                    arr[i] = arr[i - 1];
                    arr[index] = value;
                	n++;
                sorted = 0;
	            printf("Mang sau khi chen: ");
	            for (i = 0; i < n; i++) {
	            	printf("%d ", arr[i]);
				}
				printf("\n");
				}
				break;
	 		case 6:
	 			if(n==0){
	 				printf("Mang rong , vui long nhap gia tri cho mang !\n");
				}
				printf("Nhap gia tri can xoa :");
				scanf("%d",&value);
				break;
			case 7:
	 			if(n==0){
	 				printf("Mang rong , vui long nhap gia tri cho mang !\n");
				}else{
					for (i = 0; i < n - 1; i++) {
	                    maxIndex = i;
	                    for (j = i + 1; j < n; j++) {
	                        if (arr[j] > arr[maxIndex]){
	                            maxIndex = j;
	                        }
	                    }
	                    temp = arr[maxIndex];
	                    arr[maxIndex] = arr[j];
	                    arr[maxIndex] = temp;
	                }
	                sorted = 0;
				}
				printf("Mang sau khi sap xep: ");
	            for (i = 0; i < n; i++) {
	            	printf("%d ", arr[i]);
				}
				break;
	 		case 8:
	 			if(n==0){
	 				printf("Mang rong , vui long nhap gia tri cho mang !\n");
				}
				
				break;
			case 9:
	 			if(n==0){
	 				printf("Mang rong , vui long nhap gia tri cho mang !\n");
				}
				break;
	 		case 10:
	 			if(n==0){
	 				printf("Mang rong , vui long nhap gia tri cho mang !\n");
				}else{
					for(i=0;i<n/2;i++){
						temp = arr[i];
						arr[i]=arr[n-i-1];
						arr[n-i-1]=temp;
					}
					printf("Mang sau khi dao nguoc :");
					for (i=0;i<n;i++){
						printf("%d ",arr[i]);						
					}
					return 0;
				}
				
					
				break;
			default:
				printf("Khong hop le , vui long nhap lai!");
				break;
		}
		
		
		
		
	}while(choice!=11);
	return 0;
}



