#include <stdio.h>

int main()
{
    int i = 1;
    int jml;

    printf("Masukkan Jumlah Siswa: ");
    scanf("%d", &jml);

    for(i = 1; i <= jml; i++){
        printf("Nomor Absen: %d\n", i);
    }

    return 0;
}