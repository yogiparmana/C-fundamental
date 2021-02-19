#include <stdio.h>

//constanta ( tanpa titik koma)
#define true 1
#define false 0
int main()
{
    printf("Hello, World!\n");
    printf("---------------------\n");
    
    
       // deklarasi Variable
   int umur; //type data integer untuk angka tanpa koma, jika koma akan di bulatkan (variable = number)
   
   float PI;// float untuk angka dengan koma (pecahan) jika bulat maka akan di conversi (contoh 1 == 1.00)
   double PI2;// doube mirip dengan float namun angka di belakang koma lebih banyak
   char indexprestasi; // char adalah type data untuk 1 huruf 
   //bool udahmakan;
   //note(koma dalam bahasa pemrograman menggunakan titik (.))
   
   //bool
   //bool udahmakan; //C tidak memiliki bolean bool / bolean adalah type data yang menghasilkan true (benar) / false (salah) namun masih dapat diakali dengan cara menggunakan constanta ( constanta adalah variable yang tidak dapat di ubah cara penulisan menggunakan #define)
   // karena menggunakan define jadi bisa langsung digunakan tanpa variable
   
   //string
   //string nama;//string untuk kata / huruf // di c string tidak ada maka dapat diakali dengan array
   
   char nama[] = "yogi"; //atau
   // char nama[] = {'y','o','g','i'}
   //outputnya berupa array maka agar bisa di gabung maka menggunakan fungsi bawaan c yaitu strcpy()
   //fungsi strcpy() berisi 2 parameter yaitu variable penampung dan variabel array 
   //strcpy(variable_penampung, variable_array)
   //char namastring[4]; //variable penampung
   //strcpy(namastring, nama); //web tidak compitable untuk run online, jdi lebih baik menggunakan stdin
   
   
   
   //pemberian nilai pada variable / inisialisasi
   umur = 21;
   PI = 3.14;
   PI2 = 3.33;
   //udahmakan = true; 
   indexprestasi = 'A'; // char menggunakan petik 1 sedangkan string menggunakan petik 2
   
   //output 
   //output di c menggunakan perintah printf();
   printf("nama : %s\n", nama);//ternyata aray bisa di conversi ke string dengan format %s
   printf("umur : %d\n",umur);
   printf("sudah makan?: %d\n", true); //penulisan konstanta di printf
   printf("index prestasi : %c\n",indexprestasi);
   printf("PI = %f dan PI 2 = %f",PI, PI2); //penulisan printf jika variable lebih dari 1
   //penggabung variable menggunakan format
   //%s adalah format string, ada beberapa format yaitu : %c = char, %d/%i = int, %f untuk float 
   // \n untuk baris baru (enter), \t untuk tab

    return 0;
}
