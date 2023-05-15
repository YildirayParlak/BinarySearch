#include <stdio.h>
#include <stdlib.h>

// bubblesort fonksiyonu, s�ralanmam�� bir diziyi s�ralar
void bubblesort(int dizi[]) {
    int i, k;
    for (i = 0; i < 9; i++) {
        for (k = 1; k < 9 - i; k++) {
            if (dizi[k - 1] > dizi[k]) {
                int gecici = dizi[k];
                dizi[k] = dizi[k - 1];
                dizi[k - 1] = gecici;
            }
        }
    }
}

// BinarySearch fonksiyonu, bir dizide arama yapar ve sonucu d�nd�r�r
int BinarySearch(int dizi[], int sol, int sag, int arananSayi) {
    while (sag >= sol) {
        int orta = dizi[(sol + sag) / 2];
        if (orta == arananSayi)
            return 1;
        if (orta < arananSayi)
            sol++;
        if (orta > arananSayi)
            sag--;
    }
    return -1;
}

int main(int argc, char *argv[]) {
    int dizi[] = { 4, 8, 3, 84, 47, 76, 9, 24, 68 };
    
    // s�ralama i�lemi i�in bubblesort fonksiyonu �a�r�l�r
    bubblesort(dizi);
    
    int arananSayi;
    printf("dizide aramak istedi�iniz sayiyi giriniz lutfen: ");//kullan�c�dan dizidea aramak istedigi sayiyi istiyoruz
    scanf("%d", &arananSayi);
    
    // BinarySearch fonksiyonu �a�r�l�r ve sonu� al�n�r
    int sonuc = BinarySearch(dizi, 0, 8, arananSayi);

    // sonuca g�re ekrana mesaj yazd�r�l�r
    if (sonuc == 1)
        printf("%d sayisi dizide bulunuyor.", arananSayi);
    if (sonuc == -1)
        printf("%d sayisi dizide bulunmamaktadir.", arananSayi);

    return 0;
}

