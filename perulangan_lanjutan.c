#include <stdio.h>


int main()
{
 printf("Pengulangan lanjutan x latihan\n");
    printf("-----------------\n");
    
    
     printf("----------- perulangan 2 dimensi\n");
   //pengulangan 2 dimensi yaitu baris dan kolom
   //000
   //000
   //
   //contoh pengulangan 2 dimensi
   for(int i = 1; i <= 5; i++){ // ini untuk baris 
       for(int j = 1; j <= 4; j++){ // ini untuk kolom | 5 baris 4 kolom
          printf("baris ke-%d kolom ke-%d| ",i,j);  
       }
       printf("\n");
   }
   printf("\n");
   
   
   printf(" ------------ perulangan 3 dimensi\n");
   //perulangan 3 dimensi yaitu baris kolom 1 isi
   /*
| 1| 1| 1| | 1| 1| 2| | 1| 1| 3| -> baris
| 1| 2| 1| | 1| 2| 2| | 1| 2| 3| 
| 1| 3| 1| | 1| 3| 2| | 1| 3| 3| 
    isi         isi         isi
| 2| 1| 1| | 2| 1| 2| | 2| 1| 3| 
| 2| 2| 1| | 2| 2| 2| | 2| 2| 3| 
| 2| 3| 1| | 2| 3| 2| | 2| 3| 3| 
    isi         isi         isi
| 3| 1| 1| | 3| 1| 2| | 3| 1| 3| 
| 3| 2| 1| | 3| 2| 2| | 3| 2| 3| 
| 3| 3| 1| | 3| 3| 2| | 3| 3| 3| 
    isi         isi         isi
    
kolom
   */
   for(int i = 1; i<=3; i++){ // baris
       for(int j = 1; j<=3; j++){ //kolom
           for(int k = 1; k<=3; k++){ //isi (kolom baris)
            printf("| %d| %d| %d|\t ",i,j,k);
            
            }
            printf("\n");
        }
        printf("\n");
}

   printf(" ------------ perulangan 3 dimensi ++ \n");
   
    // lebih dari 3 dimensi sama kayak 3 dimensi tapi isinya 
    /*
| 1| 1| 1| 1|   | 1| 1| 1| 2|   | 1| 1| 1| 3|   
| 1| 1| 2| 1|   | 1| 1| 2| 2|   | 1| 1| 2| 3|   
| 1| 1| 3| 1|   | 1| 1| 3| 2|   | 1| 1| 3| 3|   
    isi1            isi1            isi1
| 1| 2| 1| 1|   | 1| 2| 1| 2|   | 1| 2| 1| 3|   
| 1| 2| 2| 1|   | 1| 2| 2| 2|   | 1| 2| 2| 3|   
| 1| 2| 3| 1|   | 1| 2| 3| 2|   | 1| 2| 3| 3|   
  isi1            isi1            isi1
| 1| 3| 1| 1|   | 1| 3| 1| 2|   | 1| 3| 1| 3|   
| 1| 3| 2| 1|   | 1| 3| 2| 2|   | 1| 3| 2| 3|   
| 1| 3| 3| 1|   | 1| 3| 3| 2|   | 1| 3| 3| 3|   
  isi1            isi1            isi1
                    isi 2
                    
| 2| 1| 1| 1|   | 2| 1| 1| 2|   | 2| 1| 1| 3|   
| 2| 1| 2| 1|   | 2| 1| 2| 2|   | 2| 1| 2| 3|   
| 2| 1| 3| 1|   | 2| 1| 3| 2|   | 2| 1| 3| 3|   
  isi1            isi1            isi1
| 2| 2| 1| 1|   | 2| 2| 1| 2|   | 2| 2| 1| 3|   
| 2| 2| 2| 1|   | 2| 2| 2| 2|   | 2| 2| 2| 3|   
| 2| 2| 3| 1|   | 2| 2| 3| 2|   | 2| 2| 3| 3|   
  isi1            isi1            isi1
| 2| 3| 1| 1|   | 2| 3| 1| 2|   | 2| 3| 1| 3|   
| 2| 3| 2| 1|   | 2| 3| 2| 2|   | 2| 3| 2| 3|   
| 2| 3| 3| 1|   | 2| 3| 3| 2|   | 2| 3| 3| 3|   
  isi1            isi1            isi1
                    isi2

| 3| 1| 1| 1|   | 3| 1| 1| 2|   | 3| 1| 1| 3|   
| 3| 1| 2| 1|   | 3| 1| 2| 2|   | 3| 1| 2| 3|   
| 3| 1| 3| 1|   | 3| 1| 3| 2|   | 3| 1| 3| 3|   
  isi1            isi1            isi1
| 3| 2| 1| 1|   | 3| 2| 1| 2|   | 3| 2| 1| 3|   
| 3| 2| 2| 1|   | 3| 2| 2| 2|   | 3| 2| 2| 3|   
| 3| 2| 3| 1|   | 3| 2| 3| 2|   | 3| 2| 3| 3|   
  isi1            isi1            isi1
| 3| 3| 1| 1|   | 3| 3| 1| 2|   | 3| 3| 1| 3|   
| 3| 3| 2| 1|   | 3| 3| 2| 2|   | 3| 3| 2| 3|   
| 3| 3| 3| 1|   | 3| 3| 3| 2|   | 3| 3| 3| 3|   
  isi1            isi1            isi1
                    isi3
    */

   for(int i = 1; i<=3; i++){ // baris
       for(int j = 1; j<=3; j++){ //kolom
           for(int k = 1; k<=3; k++){ // 1 isi (kolom, baris)
                for(int l = 1; l <=3; l ++){ // 2 isi(kolom, baris)
                         printf("| %d| %d| %d| %d|\t",i,j,k,l); 
                }
                printf("\n");
            
            }
            printf("\n");
        }
        printf("\n");
}

printf("--------------fariasi loop\n");
//loop bisa dibuat variasi seperti membuat segitiga atau bintang atau yang lainnya tergantung sebagaimana bagusnya kita memahami for loop itu sendiri
//contoh fariasi

printf("fariasi 1\n");
   for(int i = 0; i<=3; i++){ 
       for(int j = 0; j<=i; j++){ 
            printf("o ");
       }
       printf("\n");
   }
   printf("\n");

   printf("fariasi 2.1\n"); //decrment
   for(int i = 0; i<=3; i++){ 
       for(int j = 3; j>=i; j--){ 
            printf("o ");
       }
       printf("\n");
   }
   printf("\n");

   printf("fariasi 2.2\n");// increment
   for(int i = 0; i<=3; i++){ 
       for(int j = i; j<=3; j++){ 
            printf("o ");
       }
       printf("\n");
   }
   printf("\n");
   
   
   printf("fariasi 3.1\n"); //dengan spasi
     for(int i = 0; i<=3; i++){ 
       for(int j = 0; j<i; j++){ 
            printf(" ");
       }
        for(int k = 4; k>i; k--){ 
            printf("o ");
       }
       printf("\n");
   }
   printf("\n");
   
   printf("fariasi 3.2\n"); //dengan calculate
     for(int i = 0; i<=3; i++){ 
       for(int j = 0; j<i; j++){ 
            printf("  ");
       }
        for(int k = 3; k>=(2*i-3); k--){ 
            printf("o ");
       }
       printf("\n");
   }
   printf("\n");
   
    printf("fariasi 4.1\n"); // dengan space
     for(int i = 0; i<=3; i++){ 
       for(int k = i; k<3; k++){ 
            printf(" ");
       }
       for(int j = 0; j<=i; j++){ 
            printf("o ");
       }
      
       printf("\n");
   }
   printf("\n");
   
     printf("fariasi 4.2\n"); // dengan calculate
      for(int i = 0; i < 5; i++){
        for(int j = 4; j > i; j--){
         printf("  ");
        }
        for(int k = 0; k<(2*i-1); k++){
         printf("o "); 
        }
   printf("\n");
   }
      printf("\n");
   

   
       printf("fariasi 5.1\n"); //decremet
     for(int i = 0; i<=3; i++){ 
       for(int j = 0; j<i; j++){ 
            printf("  ");
       }
        for(int k = 3; k>=i; k--){ 
            printf("o ");
       }
       printf("\n");
   }
   printf("\n");
      printf("fariasi 5.2\n"); //incrment
     for(int i = 0; i<=3; i++){ 
       for(int j = 0; j<i; j++){ 
            printf("  ");
       }
        for(int k = i; k<=3; k++){ 
            printf("o ");
       }
       printf("\n");
   }
   printf("\n");
   
            printf("fariasi 6.1\n"); // decrement
     for(int i = 0; i<=3; i++){ 
      for(int k = 3; k>i; k--){ 
            printf("  ");
       }
       for(int j = 0; j<=i; j++){ 
            printf("o ");
       }
       
       printf("\n");
   }
   printf("\n");
   
         printf("fariasi 6.2\n"); // incrment
     for(int i = 0; i<=3; i++){ 
      for(int k = i; k<3; k++){ 
            printf("  ");
       }
       for(int j = 0; j<=i; j++){ 
            printf("o ");
       }
       
       printf("\n");
   }
   printf("\n");
   
       printf("fariasi 7.1\n"); // dengan calculate
      for(int i = 1; i < 4; i++){
        for(int j = 4; j > i; j--){
         printf("  ");
        }
        for(int k = 0; k<(2*i-1); k++){
         printf("o "); 
        }
   printf("\n");
   }   
   for(int i = 0; i<=3; i++){ 
       for(int j = 0; j<i; j++){ 
            printf("  ");
       }
        for(int k = 3; k>=(2*i-3); k--){ 
            printf("o ");
       }
       printf("\n");
   }
      printf("\n");
      
       printf("fariasi 7.2\n"); //dengan spasi
     for(int i = 0; i<=3; i++){ 
       for(int k = i; k<3; k++){ 
            printf(" ");
       }
       for(int j = 0; j<=i; j++){ 
            printf("o ");
       }
      
       printf("\n");
   }
        for(int i = 1; i<=3; i++){ 
       for(int j = 0; j<i; j++){ 
            printf(" ");
       }
        for(int k = 4; k>i; k--){ 
            printf("o ");
       }
       printf("\n");
   }
   printf("\n");
   
   
   
   printf("fariasi 8\n");
      for(int i = 0; i<=3; i++){ 
       for(int j = i; j<=3; j++){ 
            printf("o ");
       }
           for(int k = 1; k<=1; k++){ 
            printf("  ");
       }
       for(int j = 0; j<=(2*i); j++){ 
            printf("o ");
       }

          for(int j = 1; j<=1; j++){ 
            printf("  ");
       }
        for(int k = i; k<=3; k++){ 
            printf("o ");
       }
      
       printf("\n");
   }
   for(int i = 1; i<=3; i++){ 
       for(int j = 0; j<=i; j++){ 
            printf("o ");
       }
         for(int j = 1; j<=1; j++){ 
            printf("  ");
       }
        for(int k = (2*i-3); k<=3; k++){ 
            printf("o ");
            
       }
        for(int k = 1; k<=1; k++){ 
            printf("  ");
       }
       for(int j = 0; j<=i; j++){ 
            printf("o ");
       }
       printf("\n");
   }
   
   printf("\n");
   
   printf("--------------perulangan dengan kondisi\n");
   //perulangan juga bisa memiliki kondisi 
   //seperti saat kita membuat perulangan angka ganjil
   printf("Membuat bilangan ganjil\n");
   for(int i = 0; i < 10; i++){
       //kondisi
       if(i%2 != 0){
           printf("%d ",i);
       }
   }
   
      printf("\n");
   
      printf("Membuat bilangan genap\n");
   for(int i = 0; i < 10; i++){
       //kondisi
       if(i%2 == 0){
           printf("%d ",i);
       }
   }
   
      printf("\n");
   
     printf("fariasi 4.3\n"); // dengan if
      for(int i = 0; i < 5; i++){
        for(int j = 4; j > i; j--){
         printf("  ");
        }
        for(int k = 0; k<i; k++){
            if(k!=0){
            for(int l = 0; l < 2; l ++){
                 printf("o "); 
            }
            }else{
                 printf("o "); 
            }
        }
   printf("\n");
   }
   
   printf("\n");


    return 0;
}
