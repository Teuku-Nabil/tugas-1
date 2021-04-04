#include <stdio.h>

int main()
{
    int angka;
    char A, B;
    const float E = 2.72;
    const float PHI = 3.14; 
    
    printf("Masukkan Angka: ");
    scanf("%d", &angka);

    //Prefix Increment dan Decrement
    A = ++angka;
    B = --angka;

    printf("Nilai A: %d\n", A);
    printf("Nilai B: %d\n", B);
    printf("Nilai A > B\n");
    
    //Explicit Casting
    float C = (float) A/ (float) B;
    printf("Hasil Bagi A dan B adalah: %0.2f\n\n", C);

    //konstanta
    printf("Contoh Nilai Konstanta dari Simbol MTK: \n");
    printf("e= %0.2f\n", E);
    printf("phi= %0.2f", PHI);

    return 0;
}