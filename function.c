#include <stdio.h>
//membuat boolean
#define true 1;
#define false 0;
//contoh
void tampil_kata(){ // ini adalah fungsi
    printf( "hello\n" ); // ini adalah program yang dijalankan apabila kita memanggil fungsi tersebut
}
//karena c itu mengeksekusi program dari atas ke bawah, maka fungsinya harus di letakan di atas atau 
//kalo mau meletakkan fungsinya di bawah kita bisa gini
void tampil(); // ini untuk memanggil fungsi yang di bawah
int kembalian_angka();
int kembalian_bool();
float kembalian_float();
void cetak_kata(char kata[100]);
void cetak_perjumlahan(int a, int b);
int tambah(int a, int b); // parameternya boleh beda asal type datanya sama  karena itu hanya acuan
int main()
{
    printf( "function" );
    printf( "-------------" );
    //function / fungsi adalah suatu bagian dari program yang dipergunakan untuk mengerjakan suatu tugas tertentu yang menghasilkan 
    //suatu nilai untuk dikembalikan ke program pemanggil dan letaknya dipisahkan dari bagian program yang menggunakannya.
    //int main() ini adalah sebuah function, yaitu function utama dari program c++
    //penulisan seperti fu nction utama c++ namun karena ini adalah function utama jadi
    //tidak perlu di panggil lagi, contoh pemanggilan function : namaFungsi()
    //dipisahkan artinya kita membuat fungsi itu di luar fungsi utamananya
    printf( "----------------- penulisan fungsi\n" );
    tampil_kata(); //pemanggilan fungsi
    tampil();
    printf( "ini adalah int yg di kembalian : %d\n", kembalian_angka() );
    printf( "ini adalah bool yg di kembalian : %d\n", kembalian_bool() );
    printf( "ini adalah float yg di kembalian : %f\n", kembalian_float() );
    // ini 2 nilai yang mau di tambahkan
    int angka_1 = 10;
    int angka_2 = 20;
    printf( "----------------- fungsi dengan parameter\n" );
    // lalu masukkan ke 2 nilai ini ke fungsi
    //tambah(angka_1, angka_2); // cara memasukkan nilai ke parameter
    //ini tidak akan di cetak ke console karena belum di cout
    printf("%d + %d = %d\n", angka_1, angka_2, tambah(angka_1,angka_2) );
    // ini adalah fungsi yg sangat sederhana, mungkin akan lebih baik langsung membuatnya tanpa fungsi
    //namun bagaimana kalau kita akan menambahkan banyak penjumalahan?
    //kita tidak mungkin membuatnya satu per-satu,
    // maka dengan adanya fungsi kita dengan mudah mengganti parameternya saja;
    //contoh
    angka_1 = 5; // nilainya akan di timpa
    angka_2 = 5;// nilainya akan di timpa
    printf("%d + %d = %d\n", angka_1, angka_2, tambah(angka_1,angka_2) );
    //atau agar lebih mudah kita bisa menggunakan void untuk membuat coutnya
    angka_1 = 7;
    angka_2 = 9;
    cetak_perjumlahan(angka_1,angka_2); // mencetak dengan fungsi
    
    //cetak kata
    cetak_kata("ini adalah kata yang akan di cetak");
    
    return 0;
}
void tampil(){ //ini fungsi yang di letakan di bawah
    printf( "hai\n" );
}
//ada 2 jenis fungsi yaitu fungsi dengan mengembalikan sebuah nilai / atau tanpa dikembalikan
//tanpa kembalian yaitu menggunakan awalan void
//kalau mengembalikan nilai walannya berupa nilai type data yang mau di dikembalikan
//contoh kalau kita mengeluarkan nilai angka maka menggunakan int
//jika menggunakan kembalian maka akan harus menggunakan return
int kembalian_angka(){
    return 12;
}

int kembalian_bool(){
    return true;
}

float kembalian_float(){
    return 19.5;
}


// fungsi dengan parameter
// jika dalam fungsi memiliki masukkan yang tidak di ketahui / memiliki banyak 
// Parameter ini akan menyimpan nilai yang diinputkan ke fungsi 
//contoh fungsi untuk mencetak string namun string tidak di ketahui / mau di diinputkan
// membuat string di c menggunakan char array
void cetak_kata(char kata[100]){
    printf( "kata yang di masukkan ke parameter : %s\n", kata );
}


//contoh fungsi untuk mengembalikan 2 nilai yang di tambahkan namun 2 nilai ini tidak di ketahui angkanya

int tambah(int nilai_1, int nilai_2){ //nilai_1 dan nilai_2 yang bertipe int itu Parameter
    int hasil = nilai_1 + nilai_2; // proses menghitung nilai
    return hasil; // mengembalikan nilai hasil
}
// membuat void print untuk menampilkan keterangan print perjumlahannya

void cetak_perjumlahan(int angka_1, int angka_2){
    printf("%d + %d = %d\n", angka_1, angka_2, tambah(angka_1,angka_2) );// mengambil fungsi di dalam fungsi
}

