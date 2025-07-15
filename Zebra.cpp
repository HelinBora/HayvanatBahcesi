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


#include "Zebra.h"

Zebra::Zebra(std::string ad, int yas)
    : Hayvan(ad, "Zebra", yas) {}

void Zebra::Kos() {
    std::cout << "Zebra kosuyor..." << std::endl;
}

void Zebra::Beslen() {
    std::cout << "Zebra otla besleniyor..." << std::endl;
}
