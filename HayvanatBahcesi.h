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




#ifndef HAYVANATBAHCESI_H
#define HAYVANATBAHCESI_H

#include "Hayvan.h"
#include <vector>

class HayvanatBahcesi {
private:
    std::vector<Hayvan*> hayvanlar;

public:
    std::string ad;
    std::string tur;
    int yas;
    

  


    void HayvanEkle(Hayvan* hayvan);
    void HayvanlariGoster();
    void HayvanDuzenle(std::string yeniAd, std::string yeniTur, int yeniYas);
    void HayvanBesle(int indeks);
    void RaporOlustur();
};

#endif
