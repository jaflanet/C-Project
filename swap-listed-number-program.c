#include <stdio.h>

void geser(int *a,int *b,int *c,int *d)
{
    int t;
     t=*d;
    *d=*c;
    *c=*b;
    *b=*a;
    *a=t;
}

int main()
{
    int num1,num2,num3,num4;

    printf("masukan angka pertama: ");
    scanf("%d",&num1);
    printf("masukan angka kedua: ");
    scanf("%d",&num2);
    printf("masukan angka ke 3: ");
    scanf("%d",&num3);
    printf("masukan angka ke 4: ");
    scanf("%d",&num4);
    

    
    printf("Before Function: %d %d %d %d",num1,num2,num3,num4);

    geser(&num1,&num2,&num3,&num4);

    printf("\nafter Function: %d %d %d %d",num1,num2,num3,num4);

    return 0;
}