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


#include "Hayvan.h"

Hayvan::Hayvan(std::string ad, std::string tur, int yas)
    : ad(ad), tur(tur), yas(yas) {}


void Hayvan::BilgileriGoster() {
    std::cout << "Ad: " << ad << std::endl;
    std::cout << "Tur: " << tur << std::endl;
    std::cout << "Yas: " << yas << std::endl;
}

void Hayvan::Beslen() {
    std::cout << "Hayvan besleniyor..." << std::endl;
}
