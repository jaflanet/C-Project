#include <stdio.h>
#include <stdlib.h>

int main(){
    int jenis;
    int jam;
    int jam2;
    int menit;
    int biaya;
    printf("program untuk menghitung biaya parkir\n\n");

    printf("Jenis kendaraan:\n");
    printf("1. mobil\n");
    printf("2. motorl\n");
    printf("masukan jenis kendaraan anda 1/2 >>");
    scanf("%d",&jenis);

    printf("jam >>");
    scanf("%d",&jam);
    printf("menit>>");
    scanf("%d",&menit);
    jam2=jam;

    switch (jenis) {
        case 1:
    biaya = 4000;
    if (menit > 0){
        jam = jam +1;
    }
    else{
        jam = jam; 
    }
    while (jam > 1){
        biaya = biaya + 2000;
        jam--;
    }
    if (jam2 >= 24){
        jam2 = jam2 / 24;
        while (jam2 > 0){
            biaya = biaya - 15000;
            jam2--;
        }
    }
    else {
        biaya = biaya;
    }
    printf("biaya parkir mobil anda adalah Rp.%d",biaya);
    break;

    case 2:
    biaya = 2000;
    if (menit > 0){
        jam = jam +1;
    }
    else{
        jam = jam; 
    }
    while (jam > 1){
        biaya = biaya + 1000;
        jam--;
    }
    if (jam2 >= 24){
        jam2 = jam2 / 24;
        while (jam2 > 0){
            biaya = biaya - 7500;
            jam2--;
        }
    }
    else {
        biaya = biaya;
    }
    printf("biaya parkir motor anda adalah Rp.%d",biaya);
    break;
    default:
    printf("\ntidak sesuai kententuan kendaraan");\


}
return 0;
}