#include <stdio.h>

int main()
{
    char nama[25];
    char alamat[25];
    int umur;

    printf("Masukkan Nama Anda: ");
    scanf(" %[^\n]", nama);

    printf("Masukkan Umur Anda: ");
    scanf("%d", &umur);

    printf("Masukkan Alamat Anda: ");
    scanf(" %[^\n]", alamat);

    printf("Nama Saya: %s\n", nama);
    printf("Umur Saya: %d\n", umur);
    printf("Alamat Saya: %s", alamat);

    return 0;
}