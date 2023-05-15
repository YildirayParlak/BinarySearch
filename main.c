#include <stdio.h>
#include <stdlib.h>

// bubblesort fonksiyonu, sýralanmamýþ bir diziyi sýralar
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

// BinarySearch fonksiyonu, bir dizide arama yapar ve sonucu döndürür
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
    
    // sýralama iþlemi için bubblesort fonksiyonu çaðrýlýr
    bubblesort(dizi);
    
    int arananSayi;
    printf("dizide aramak istediðiniz sayiyi giriniz lutfen: ");//kullanýcýdan dizidea aramak istedigi sayiyi istiyoruz
    scanf("%d", &arananSayi);
    
    // BinarySearch fonksiyonu çaðrýlýr ve sonuç alýnýr
    int sonuc = BinarySearch(dizi, 0, 8, arananSayi);

    // sonuca göre ekrana mesaj yazdýrýlýr
    if (sonuc == 1)
        printf("%d sayisi dizide bulunuyor.", arananSayi);
    if (sonuc == -1)
        printf("%d sayisi dizide bulunmamaktadir.", arananSayi);

    return 0;
}

