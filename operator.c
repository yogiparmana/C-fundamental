#include <stdio.h>


int main()
{
    printf( "Operator\n");
printf( "-----------\n");
    
    //-----------operator---------------
    //simbol untuk melakukan operasi
    
    //----------------Operator Aritmatika
    /*
Penjumlahan +
Pengurangan -
Perkalian   *
Pembagian   /
Sisa Bagi   %
    
    */
    printf("----------------------aritmatika\n");
    int angka1,angka2;
    int hasil;
    
    angka1 = 10;
    angka2 = 20;
    
    //tambah
    hasil = angka1+angka2;
    printf( "Hasil dari %d + %d = %d\n",angka1,angka2,hasil);
    //kurang
    hasil = angka1-angka2;
    printf( "Hasil dari %d - %d = %d\n",angka1,angka2,hasil);
    //kali
    hasil = angka1 * angka2;
    printf( "Hasil dari %d x %d = %d\n",angka1,angka2,hasil);
    //bagi
    hasil = angka2 / angka1;
    printf( "Hasil dari %d : %d = %d\n",angka1,angka2,hasil);
    //modulus atau sisa bagi
    hasil = angka1 % angka2;
    printf( "Hasil dari %d mod %d = %d\n",angka1,angka2,hasil);
    
    
     printf( "----------------------penugasan\n");
    
    //----------------Operator penugasan (Assignment Operator) 
    // fungsinya untuk mengisi nilai
    
    /*
Pengisian Nilai             =
Pengisian dan Penambahan    +=
Pengisian dan Pengurangan   -=
Pengisian dan Perkalian     *=
Pengisian dan Pembagian     /=
Pengisian dan Sisa bagi     %=
    */
    
    int a,b,c;
    
    //=
    a = 1;
    b = 2;
    
    //+=
    a+=b; // artinya a = a + b; 3
     printf( "a+=b : %d\n",a);
    a-=b; // artinya a = a - b; -1
     printf( "a-=b : %d\n",a);
    a*=b; // artinya a = a x b; 2
     printf( "a*=b : %d\n",a);
    a/=b; // artinya a = a / b; 0,5 / 1 karena int
     printf( "a/=b : %d\n",a);
    a%=b; // artinya a = a % b;  1
     printf( "amod=b : %d\n",a);
     
     //-----------operator bitwise dengan style penugasan
     //operasi berdasarkan biner
     /*
    AND             &
    OR              |
    XOR             ^
    NOT/komplemen   ~
    Left Shift      <<
    Right Shift     >>
    */
    printf("a : %d, b : %d\n",a,b);
    a<<=b; // artinya a = a << b; menggunakan rumus biner | 0101010
     printf( "a<<=b : %d\n",a);
    a>>=b; // artinya a = a >> b; menggunakan rumus biner | 0101010
     printf( "a>>=b : %d\n",a);
    a&=b; // artinya a = a & b; menggunakan rumus biner | 0101010
     printf( "a&=b : %d\n",a);
    a|=b; // artinya a = a | b; menggunakan rumus biner | 0101010
     printf( "a|=b : %d\n",a);
    a^=b; // artinya a = a ^ b; menggunakan rumus biner | 0101010
     printf( "a^=b : %d\n",a);
     c = ~a;
     printf( "~a : %d\n",c);
     c = ~b;
     printf( "~b : %d\n",c);
    
    
    
    printf( "----------------------perbandingan\n");
    
    //----------------perbandingan
    //untuk membandingkan 2 buah nilai
    // menghasilkan true 1, dan false 0
    
    /*
Lebih Besar             >
Lebih Kecil             <
Sama Dengan             ==
Tidak Sama dengan       !=
Lebih Besar Sama dengan >=
Lebih Kecil Sama dengan <=
  */
  printf("a : %d, b : %d\n",a,b);
  c = a > b;
  printf( "a>b : %d\n", c);
  c = a < b;
  printf( "a<b : %d\n", c);
  c = a == b;
  printf( "a==b : %d\n", c);
  c = a != b;
  printf( "a!=b : %d\n", c);
  c = a >= b;
  printf( "a>=b : %d\n", c);
  c = a <= b;
  printf( "a<=b : %d\n", c);
  
 
 //---------------operator logika
 
 printf( "-------------------logika\n");
 
 /*
Logika AND        true  && true = true, sisanya false
Logika OR         false  || false = false, sisanya true
Negasi/kebalikan    !true = false, !false = true
*/
printf("a : %d, b : %d\n",a,b);
printf("a && b : %d\n", (a&&b));
printf("a || b : %d\n",(a||b));
printf( "!a : %d\n", !a);
printf( "!b : %d\n", !b);


//---------------operator lain-lain

printf( "---------------------- operator lain-lain\n");

/*
Alamat memori   &   untuk mengambil alamat memori
Pointer         *   untuk membuat pointer
Ternary         ? : untuk membuat kondisi
Increment       ++  untuk menambah 1
Decrement       --  untuk mengurangi 1

*/
int *d;
printf( "ambil tempat memori variable d : %x\n", &d);
printf( "apakah 1 = 2 ? : %s\n", ((1 == 2) ? "iya" : "tidak"));
int var = 7;
//karna di yang di proses pertama adalah operasi/variable lalu baru string jadi saya akali dengan menanmbahkan -1 dan +1
printf("%d ditambahkan satu kali : %d\n",var-1, ++var); 
printf("%d dikurangkan satu kali : %d\n",var+1, --var);
printf("%d ditambahkan satu kali : %d\n",var-1, var++); //ditampilkan dlu baru di tambah jadinya akan tetap 
printf("setelah di ditambah satu kali : %d\n",var); //hasil sebenarnya
printf("%d dikurangkan satu kali : %d\n",var+1, var--); //ditampilkan dlu baru di tambah jadinya akan tetap 
printf("setelah di kurangi satu kali : %d\n",var); //hasil sebenarnya

    


    return 0;
}
