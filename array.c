#include <stdio.h>

int main()
{
    printf( "Array\n");
    printf( "-------------\n");
    //array digunakan untuk menyimpan banyak data
    //contoh tanpa array
    //ini menggunakan array karena tidak ada string di c
    // char namaMurid1[10] = "Ayu";
    // char namaMurid2[10] = "Bunga";
    // char namaMurid3[10] = "Cyntia";
    // char namaMurid4[10] = "Deni";
    // char namaMurid5[10] = "Elisa";
    // karena tidak ada type data string c maka kita akan menggunakan char dengan pointer
    //gimana kalo murid ada 100 atau 1000? 
    //maka agar lebih efisien kita gunakan array
    char *nama_array_murid[5]; // inisialisasi array dengan jumlah data 
    printf( "---------- memasukkan data ke array\n");
     nama_array_murid[0] = "Ayu"; //[0] ini adalah index, index dimulai dari 0,
     //jika jumlah datanya 5 maka indexnya 0-4, 
     nama_array_murid[1] = "Bunga";
     nama_array_murid[2] = "Cyntia";
     nama_array_murid[3] = "Deni";
     nama_array_murid[4] = "Elisa";
     //sama dong kayak yang di atas, kalo datanya ada 100 masak harus buat nama_array_murid[100]
     //kita bisa membuat looping untuk mengisi datanya
     //contoh membuat 10 data
     int nilai_array_murid[10];
     for (int i = 0; i < 10; ++i)
     {
         printf( "masukan nilai murid ke [ %d ] : ",i+1); // keterangan input
         scanf("%d",&nilai_array_murid[i]); // i adalah angka yang akan di looping mulai dari 0-9 // & untuk input
     }
     //maka kita akan menginputkan data sebanyak 10x
     //kalo mau input ada 100 tinggal looping aja seratus kali

     //atau bisa langsung di masukkan
     int absen_array_murid[5] = {1,2,3,4,5}; //1 memiliki index 0

     printf( "---------- menampilkan array\n");
     // cara menampilkan array
     printf( "nama : %s\n", nama_array_murid[0]); 
     //bagaimana kalo datanya ada banyak? ya looping aja
     
     for (int i = 0; i < 5; ++i)
     {
         printf( "nama murid ke [ %d ] : %s\n",i+1,nama_array_murid[i]); //menampilkan array nama_array_murid 
     }
      for (int i = 0; i < 5; ++i)
     {
         printf( "absen murid ke [ %d ] : %d\n",i+1,absen_array_murid[i]); //menampilkan array absen_array_murid 
     }
     // terus bagaimana kalo banyak datanya tidak diketahui? masak harus meriksa satu per satu?
     //bisa gunakan sizeof
     int length = sizeof(nilai_array_murid) / sizeof(nilai_array_murid[0]); // ini untuk menghitung banyak ada
     for (int i = 0; i < length; ++i)
     {
         printf( "nilai murid ke [ %d ] : %d\n",i+1,nilai_array_murid[i]); //menampilkan array nilai_array_murid 
     }


    
    return 0;
}
