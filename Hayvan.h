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




#ifndef HAYVAN_H
#define HAYVAN_H

#include <iostream>
#include <string>

class Hayvan {
private:
    std::string ad;
    std::string tur;
    int yas;

public:
    Hayvan(std::string ad, std::string tur, int yas);
    void BilgileriGoster();
    void BilgileriDuzenle(std::string yeniAd, std::string yeniTur, int yeniYas);
    virtual void Beslen();

    std::string GetAd() const;
    void SetAd(const std::string& ad);

    int GetYas() const;
    void SetYas(int yas);
};

#endif
