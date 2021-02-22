#include <stdio.h>


int main()
{
printf("Pengulangan\n");
 printf("-----------\n");
    
    
  printf("----------- for\n");
   //pengulangan dalam bahasa pemrogramman umumnya ada 3 pengulangan
   //pengulangan menggunakan -------------------- for
   //contoh pengulangan 5x
   for(int i = 0; i < 5; ++i){
    printf("%d\n",i); //01234 karena int i dimulai dari o
       //kenapa 0 karena umumnya for digunakan untuk menampilkan isi array
       //karena index array di mulai dari 0
       // angka 5 adalah jumlah banyaknya pengulangan
   }
printf("\n");
   
   //agar dimulai 1 langsung saja isikan int i = 1 dan juga < di kasih = atau 5 di ganti jadi 6agar mengulang 5x 
    for(int i = 0; i <= 5 /*i  < 6*/; ++i){
    printf("%d\n",i); //01234 karena int i dimulai dari o
       //kenapa 0 karena umumnya for digunakan untuk menampilkan isi array
       //karena index array di mulai dari 0
       // angka 5 adalah jumlah banyaknya pengulangan
   }
printf("\n");
   //contoh pengulangan 5 tapi decrement
   for(int i = 5; i > 0 ; i--){
    printf("%d\n",i); // 54321 karena int i dimulai dari 5 
   }
   
   
  printf("----------- do while\n");
     //pengulangan menggunakan -------------------- while do
     int i = 0;
     do{
         i++; //i + 1
      printf("%d\n",i); // cetak i 
         
     }while(i < 5); // sampai i lebih kecil 5
     // hasil 12345
     printf("\n");
     i = 5; //ubah i = 5
     //---------------while
     while(i > 0){ //cek apakah i lebih besar dari 0 jika true
      printf("%d\n",i); //cetak i
         i--; //i kurang 1
     }
    


    return 0;
}
