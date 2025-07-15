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
#include "HayvanatBahcesi.h"
#include "Hayvan.h"
#include "Aslan.h"
#include "Zebra.h"
#include "Kartal.h"

void HayvanatBahcesi::HayvanEkle(Hayvan* hayvan) {
    hayvanlar.push_back(hayvan);
}

void HayvanatBahcesi::HayvanlariGoster() {
    for (const auto& hayvan : hayvanlar) {
        hayvan->BilgileriGoster();
        std::cout << "-------------------" << std::endl;
    }
}

void HayvanatBahcesi::HayvanDuzenle(std::string yeniAd, std::string yeniTur, int yeniYas) {
    ad = yeniAd;
    tur = yeniTur;
    yas = yeniYas;

}


void HayvanatBahcesi::HayvanBesle(int indeks) {
    if (indeks >= 0 && indeks < hayvanlar.size()) {
        hayvanlar[indeks]->Beslen();
    }
    else {
        std::cout << "Geçersiz indeks!" << std::endl;
    }
}


std::string Hayvan::GetAd() const {
    return ad;
}


void Hayvan::SetAd(const std::string& ad) {
    this->ad = ad;
}

int Hayvan::GetYas() const {
   int yas = 0;
    return yas;
}

void Hayvan::SetYas(int yas) {
    this->yas = yas;
}


void HayvanatBahcesi::RaporOlustur() {
    std::cout << "---------------- Rapor ----------------" << std::endl;

    // Aslanlarin yaþlarýný toplamak için deðiþkenler
    int aslanSayisi = 0;
    int aslanYasToplami = 0;

    // Zebralarin yaþlarýný toplamak için deðiþkenler
    int zebraSayisi = 0;
    int zebraYasToplami = 0;

    // Kartallarin yaþlarýný toplamak için deðiþkenler
    int kartalSayisi = 0;
    int kartalYasToplami = 0;

    // Hayvanlarin yaþlarýný hesapla
    for (Hayvan* hayvan : hayvanlar) {
        if (dynamic_cast<Aslan*>(hayvan) != nullptr) {
            aslanSayisi++;
            aslanYasToplami += hayvan->GetYas();
        }
        else if (dynamic_cast<Zebra*>(hayvan) != nullptr) {
            zebraSayisi++;
            zebraYasToplami += hayvan->GetYas();
        }
        else if (dynamic_cast<Kartal*>(hayvan) != nullptr) {
            kartalSayisi++;
            kartalYasToplami += hayvan->GetYas();
        }
    }

    // Aslanlarin yaþ ortalamasýný hesapla
    double aslanYasOrtalamasi = (aslanSayisi != 0) ? static_cast<double>(aslanYasToplami) / aslanSayisi : 0;

    // Zebralarin yaþ ortalamasýný hesapla
    double zebraYasOrtalamasi = (zebraSayisi != 0) ? static_cast<double>(zebraYasToplami) / zebraSayisi : 0;

    // Kartallarin yaþ ortalamasýný hesapla
    double kartalYasOrtalamasi = (kartalSayisi != 0) ? static_cast<double>(kartalYasToplami) / kartalSayisi : 0;

    // Hayvanlarý türlere göre sýrala
    std::sort(hayvanlar.begin(), hayvanlar.end(), [](Hayvan* a, Hayvan* b) {
        return a->Hayvan::GetYas(); b->Hayvan::GetYas();
        });

    // Raporu yazdýr
    std::cout << "Aslanlarin sayisi: " << aslanSayisi << std::endl;
    std::cout << "Aslanlarin yas ortalamasi: " << aslanYasOrtalamasi << std::endl;

    std::cout << "Zebralarin sayisi: " << zebraSayisi << std::endl;
    std::cout << "Zebralarin yas ortalamasi: " << zebraYasOrtalamasi << std::endl;

    std::cout << "Kartallarin sayisi: " << kartalSayisi << std::endl;
    std::cout << "Kartallarin yas ortalamasi: " << kartalYasOrtalamasi << std::endl;

    std::cout << "Hayvanlarin siralanmis listesi:" << std::endl;
    for (Hayvan* hayvan : hayvanlar) {
        hayvan->BilgileriGoster();
    }

    std::cout << "---------------------------------------" << std::endl;
}

