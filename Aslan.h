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


#ifndef ASLAN_H
#define ASLAN_H

#include "Hayvan.h"

class Aslan : public Hayvan {
public:
    Aslan(std::string ad, int yas);
    void KralOl();
    void Beslen() override;
};

#endif
