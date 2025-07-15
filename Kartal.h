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




#ifndef KARTAL_H
#define KARTAL_H

#include "Hayvan.h"

class Kartal : public Hayvan {
public:
    std::string ad;
    std::string tur;
    int yas;


    Kartal(const std::string& ad, int yas);
    void BilgileriGoster() ;
    void Beslen() override;
};

#endif  // KARTAL_H
