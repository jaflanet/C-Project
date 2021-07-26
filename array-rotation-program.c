#include <stdio.h>
#define SIZE 100

void printarray(int a[SIZE][SIZE],int n);
void rotatecw(int a[SIZE][SIZE],int n);
void rotateccw(int a[SIZE][SIZE], int n);

int main(){
    int a [SIZE][SIZE];
    int i ;
    int j ;
    int n;
    int count=1;
    int atur=1;
    printf(" Masukan besar array >>");
    scanf("%d",&n);

    for (i=0 ; i<n ; i++){
        for (j=0 ; j <n; j++){
            if(i==n/2 ){
                printf(" MASUKAN angka ke-%d >>",count);
                scanf("%d",&a[i][j]);
            count++;
            }
            else if (i != n/2 && j == n/2){
                printf(" MASUKAN angka ke %d >>",count);
                scanf("%d",&a[i][j]);
            count++;
            }
            else{
               a[i][j]=0;
            }
        }
    }
    printarray(a,n);

    while (atur != 0){
        printf("masukan input >>");
        scanf("%d",&atur);
    switch(atur){
        case 1 :
        rotatecw(a,n);
        printarray(a,n);
        break;
        case -1 :
        rotateccw(a,n);
        printarray(a,n);
        break;
        case 0 :
        printarray(a,n);
        printf("program selesai");
        return 0;
        break;
        default:
        break;
    }

    }
}

void printarray(int a[SIZE][SIZE],int n){
int i,j;
for (i=0 ; i< n ; i++){
        for (j=0 ; j < n; j++){
          if(i==n/2 ){
                printf(" %d ",a[i][j]);
            }
            else if (i != n/2 && j == n/2){
                printf(" %d ",a[i][j]);
            }
            else{
               printf("   ",a[i][j]);
            }
    }
    printf("\n");
}
}

void rotatecw(int a[SIZE][SIZE],int n) {
int i;
int j;
int temp;
    for (i = 0; i < n / 2; i++) {
        for (j = i; j < n - i - 1; j++) {
 
            temp = a[i][j];
            a[i][j] = a[n - 1 - j][i];
            a[n - 1 - j][i] = a[n - 1 - i][n - 1 - j];
            a[n - 1 - i][n - 1 - j] = a[j][n - 1 - i];
            a[j][n - 1 - i] = temp;
        }
    }
}

void rotateccw(int a[SIZE][SIZE], int n) {
int i;
int j;
int temp;
    for (i = 0; i < n / 2; i++) {
        for (j = i; j < n - i - 1; j++) {
            temp = a[j][n - 1 - i];
            a[j][n - 1 - i] = a[n - 1 - i][n - 1 - j];
            a[n - 1 - i][n - 1 - j]= a[n - 1 - j][i];
            a[n - 1 - j][i] = a[i][j];
            a[i][j] = temp;
        }
    }
}
