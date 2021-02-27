#include <stdio.h>


int main()
{
    printf("Input Console dan output\n");
    printf("-----------------\n");
    
    //input menggunakan scanf() dan output printf()
    int number; //inisialisasi variable int number
    printf("Masukkan Number : "); //keterangan input
    scanf("%d",&number); // proses input kalau integer menggunakan pointer &namavariable
    //ini berlaku unutk int, float, dan char
    printf("output number : %d\n", number); // proses output
    
    char kata[123]; // inisialisasi variable char array kata
    printf("Masukkan Kata : "); //keterangan input
    scanf("%s",kata); // proses input dan diubah ke string
    //karena kata adalah array maka tidak perlu pointer
    printf("output string : %s\n", kata); // output
    
    // input menggunakan gets() and  output puts() tapi katanya ini sudah usang
    
    //enggk bisa digabung scanf dengan getchar
    int n;
    //input menggunakan getchar() and output putchar()
    printf("Masukkan Number : "); //keterangan input
    n = getchar(); // proses input 
    printf("output number : "); // keterangan output 
    putchar(n); // proses output


    return 0;
}
