#include <stdio.h>


int main()
{
    printf("switch case\n");
    printf("-----------------\n");
    //switch case adalah percabangan kode program dimana kita membandingkan isi sebuah variabel dengan beberapa nilai
    //contoh
    //int number = 2; //langsung input atau
    int number;
    printf("masukkan angka : ");
    scanf("%d", &number);
    switch(number){ //variable yg akan di switch / di periksa
        case 0: // jika number == 0
            printf("number == 0"); //jalankan ini
            break; //break di gunakan untuk menstop / case yang selanjutnya di hentikan  jika casenya benar
        case 1: // jika number == 1
            printf("number == 1"); //jalankan ini
            break; //break
        case 3: //jika number == 3
            printf("number == 3"); //jalankan ini
            break; //break
        default: // jika variable tidak sama dengan case 
            printf("number != 0,1,3"); //jalankan ini
            break;//break
    }


    return 0;
}
