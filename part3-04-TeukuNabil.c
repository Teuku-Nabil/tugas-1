#include <stdio.h>

int main()
{
    int makanan, minuman;

    printf("Silahkan pilih menu anda!\n");
    printf("Makanan:\n 1. Pizza\n 2. Bakso\n\n");
    printf("Minuman:\n 1. Jus Jeruk\n 2. Teh\n");
    
    printf("Masukkan Makanan 1 atau 2: ");
    scanf("%d", &makanan);

    printf("Masukkan Minuman 1 atau 2: ");
    scanf("%d", &minuman);

    if(makanan == 1){
        printf("Anda Memilih Pizza\n");
    }
    else if(makanan == 2){
        printf("Anda Memilih Bakso\n");
    }
    else{
        printf("Harap Masukkan 1 atau 2!\n");
    } 

    switch(minuman){
        case 1 : printf("Anda Memilih Jus Jeruk\n");
        break;

        case 2 : printf("Anda Memilih Teh\n");
        break ;

        default : printf("Harap Masukkan 1 atau 2!\n");
    }

    return 0;
}