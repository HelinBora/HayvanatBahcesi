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


#include "Aslan.h"

Aslan::Aslan(std::string ad, int yas)
    : Hayvan(ad, "Aslan", yas) {}

void Aslan::KralOl() {
    std::cout << "Aslan kral oluyor..." << std::endl;
}

void Aslan::Beslen() {
    std::cout << "Aslan etle besleniyor..." << std::endl;
}
