/*
Uygulama ile Ýlgili Genel Açýklamalar
•	Helin BORA
•	220707056
•	Bilgisayar Mühendisligi
•	Nesneye Yonelik Programlama MBM 104
•	Bahar 2023
•	Programlama Projesi 1
•	Deniz DAl

*/


#include <algorithm>
#include <iostream>
#include "Hayvan.h"
#include "Aslan.h"
#include "Zebra.h"
#include "Kartal.h"
#include "HayvanatBahcesi.h"

int main() {
    HayvanatBahcesi hayvanatBahcesi;

    while (true) {
        std::cout << "Hayvanat Bahcesi Yonetim Sistemi" << std::endl;
        std::cout << "1. Hayvan Ekle" << std::endl;
        std::cout << "2. Hayvanlari Goster" << std::endl;
        std::cout << "3. Hayvan Duzenle" << std::endl;
        std::cout << "4. Hayvan Besle" << std::endl;
        std::cout << "5. Rapor Olustur" << std::endl;
        std::cout << "6. Cikis" << std::endl;

        int secim;
        std::cout << "Seciminizi yapin: ";
        std::cin >> secim;

        switch (secim) {
        case 1: {
            std::cout << "Hayvan turunu girin (Aslan / Zebra / Kartal): ";
            std::string tur;
            std::cin >> tur;

            std::cout << "Hayvan adini girin: ";
            std::string ad;
            std::cin >> ad;

            std::cout << "Hayvan yasini girin: ";
            int yas;
            std::cin >> yas;

            if (tur == "Aslan") {
                Aslan* aslan = new Aslan(ad, yas);
                hayvanatBahcesi.HayvanEkle(aslan);
            }
            else if (tur == "Zebra") {
                Zebra* zebra = new Zebra(ad, yas);
                hayvanatBahcesi.HayvanEkle(zebra);
            }
            else if (tur == "Kartal") {
                Kartal* kartal = new Kartal(ad, yas);
                hayvanatBahcesi.HayvanEkle(kartal);
            }
            else {
                std::cout << "Gecersiz hayvan turu!" << std::endl;
            }
            break;
        }
        case 2: {
            hayvanatBahcesi.HayvanlariGoster();
            break;
        }
        case 3: {
            std::cout << "Hangi hayvani duzenlemek istersiniz? (indeksi girin): ";
            int indeks;
            std::cin >> indeks;

            Hayvan HayvanDuzenle(std::string yeniAd, std::string yeniTur, int yeniYas);
            break;
        }
        case 4: {
            std::cout << "Hangi hayvani beslemek istersiniz? (indeksi girin): ";
            int indeks;
            std::cin >> indeks;

            hayvanatBahcesi.HayvanBesle(indeks);
            break;
        }
        case 5: {
            hayvanatBahcesi.RaporOlustur();
            break;
        }
        case 6: {
            return 0;
        }
        default: {
            std::cout << "Gecersiz secim!" << std::endl;
            break;
        }
        }

        std::cout << "----------------------------" << std::endl;
    }
}
