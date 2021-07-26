#include <stdio.h>  

struct koordinat{  
int x;
int y;
};
void mirror_x(struct koordinat*ptr);
void mirror_y(struct koordinat*ptr);
void swap(struct koordinat*ptr);

int main(){
struct koordinat *ptr;
ptr = (struct koordinat*) calloc(0,sizeof(struct koordinat));
printf("koordinat x>> ");
scanf("%d", &(ptr)->x);
printf("koordinat y>> ");
scanf("%d", &(ptr)->y);
printf("\nnilai awal: %d %d\n", (ptr)->x, (ptr)->y);
mirror_x(ptr);
printf("\nnilai refleksi terhadap sumbu X: %d %d\n", (ptr)->x, (ptr)->y);
mirror_y(ptr);
printf("nilai refleksi terhadap sumbu Y: %d %d\n", (ptr)->x, (ptr)->y);
swap(ptr);
printf("nilai pertukaran X & Y: %d %d\n", (ptr)->x, (ptr)->y);
}

void mirror_x(struct koordinat*ptr){
    (ptr)->y= (ptr)->y*-1;
}

void mirror_y(struct koordinat*ptr){
    (ptr)->x= (ptr)->x*-1;
}

void swap(struct koordinat*ptr){
    int temp;
    temp = (ptr)->x;
    (ptr)->x= (ptr)->y;
    (ptr)->y = temp;
}