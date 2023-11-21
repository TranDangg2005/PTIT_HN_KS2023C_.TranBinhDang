#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n,m,j,k,flag,i;
	printf("Nhap so hang va so cot: ");
	scanf("%d %d",&n,&m);
	int num[n][m],count;
	int sum;
	do{
		printf("*************************MENU*********************\n");
		printf("1. Nhap cac gia tri phan tu cua mang\n");
		printf("2. In ra cac gia tri phan tu trong mang\n");
		printf("3. Tinh so luong phan tu chia het cho 2 va 3 trong mang\n");
		printf("4. In cac phan tu va tong cac phan tu nam tren duong bien, duong cheo chinh va cheo phu\n");
		printf("5. Su dung thuat toan lua chon sap xep cac phan tu tang dan theo cot\n");
		printf("6. In ra cac phan tu la so nguyen to trong mang\n");
		printf("7. Su dung thuat toan noi bot sap xep cac phan tu tren duong cheo chinh cua mang\n");
		printf("8. Nhap gia tri mot mang 1 chieu gom m phan tu va chi so dong muon chen vao mang, chen vao mang 2 chieu\n");
		printf("9. Thoat\n");
		printf("Lua chon cua ban: ");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("number[%d][%d]= ",i,j);
						scanf("%d",&num[i][j]);
					}
				}
				break;
			case 2:
				printf("In gia tri cac phan tu trong mang: \n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("%d\t",num[i][j]);
					}
					printf("\n");
				}
				break;
			case 3:
				count=0;
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(num[i][j]%2==0 && num[i][j]%3==0){
							count++;
						}
					}
				}
				printf("So phan tu chia het cho 2 va 3 trong mang la: %d\n",count);
				break;
			case 4:
   printf("cac phan tu nam tren duong bien:\n");
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
     if(i==0 || i== n-1 || j==0 || j== m-1){
      printf("%d\t", num[i][j]);
     }
    }
   }
   if(n==m){
    printf("\nCac phan tu nam tren duong cheo chinh:\n");
    for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
      if(i==j){
       printf("%d\t",num[i][j]);
      }
     }
    }
    printf("\ncac phan tu nam tren duong cheo phu:\n");
    for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
      if(i+j==n-1){
       printf("%d\t",num[i][j]);
      }
     }
    }
   }else{
    printf("Day la ma tran vuong khong co cheo chinh va cheo phu\n");
   }
      break;
				case 6:
				for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			flag=0;
			for(k=2;k<num[i][j];k++){
				if(num[i][j]%k==0){
					flag=1;
					break;
				}
				if(flag==0){
				printf("%d\t", num[i][j]);
				}
			}
		}
	}
break;
				case 9:
					exit(0);
					default:
					printf("vui long chon tu 1-9\n");
				}
			}while(9==9);
			
			}
			
				
