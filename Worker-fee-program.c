#include <stdio.h>  
#include <stdlib.h>  

struct karyawan{  
char nama[30];
int shift;
int gaji;
};

int main() {
struct karyawan *ptr;
int i,a;
int n=5;
ptr = (struct karyawan*) calloc(n,sizeof(struct karyawan));
for(i = 0; i < n; ++i) {
printf("\nmasukan nama karyawan ke-%d: ",i+1);
scanf("%s", &(ptr+i)->nama);
printf("masukan shift karyawa ke-%d >> ",i+1);
scanf("%d",&(ptr+i)->shift);
}
for(i = 0; i < n; ++i) {
    a=0;
    a=(ptr+i)->shift / 7;
    (ptr+i)->gaji = 78000*a;
    if((ptr+i)->shift>70){
        (ptr+i)->gaji +=((ptr+i)->gaji*8/100);
    }
}
printf("\nData karyawan\n");
for(i = 0; i < n; ++i){
printf("Data karyawan %d: %s %d\n",i+1, (ptr+i)->nama, (ptr+i)->shift);
}
printf("\n");
for(i = 0; i < n; ++i){
printf("gaji %s sebesar Rp %d.00\n",(ptr+i)->nama, (ptr+i)->gaji);
}
return 0;
}