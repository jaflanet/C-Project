#include<stdio.h>
#define SIZE 100

void printarray(int b,int k);
void spin(int b,int k);
int a[SIZE][SIZE];
int main(){
    int i,j;
    int k,b;
    printf(" Masukan jumlah kolom >>");
    scanf("%d",&k);
    printf(" Masukan jumlah baris >>");
    scanf("%d",&b);
    for (i=0 ; i<b ; i++){
        for (j=0 ; j <k; j++){
                printf(" masukan angka angka ke kolom %d%d >>",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
    }
    printarray(b,k);
    spin(b,k);
    printarray(b,k);
}

void printarray(int b,int k){
int i,j;
for (i=0 ; i< b; i++){
        for (j=0 ; j < k; j++){
                printf(" %d ",a[i][j]);
    }
    printf("\n");
}
}

void spin(int b,int k){
int i=0,j=0;
int n=0;
int temp;
for (i=0 ; i< b; i++){
        for (j=0 ; j < k; j++){
            n=0;
            while(n<i){
                temp =a[i][j];
                a[i][j]=a[i][j+1];
            }
    }
}
}