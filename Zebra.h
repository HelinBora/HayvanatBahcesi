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


#ifndef ZEBRA_H
#define ZEBRA_H

#include "Hayvan.h"

class Zebra : public Hayvan {
public:
    Zebra(std::string ad, int yas);
    void Kos();
    void Beslen() override;
};

#endif
