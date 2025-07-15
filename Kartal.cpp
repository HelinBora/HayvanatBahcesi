/*
Uygulama ile �lgili Genel A��klamalar
�	Helin BORA
�	220707056
�	Bilgisayar M�hendisligi
�	Nesneye Yonelik Programlama MBM 104
�	Bahar 2023
�	Programlama Projesi 1
�	Deniz DAl

*/


#include "Kartal.h"

Kartal::Kartal(const std::string& ad, int yas) : Hayvan(ad, "Kartal", yas) {}

void Kartal::BilgileriGoster() {
    std::cout << "Hayvan Adi: " << ad << std::endl;
    std::cout << "Tur: " << tur << std::endl;
    std::cout << "Yas: " << yas << std::endl;
    std::cout << "Kartal Ozellikleri: ..." << std::endl;
}

void Kartal::Beslen() {
    std::cout << "Kartal beslendi!" << std::endl;
}
