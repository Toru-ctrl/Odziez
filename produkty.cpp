#include <iostream>
#include <cmath>
#include "produkty.h"

using namespace std;

Produkt::Produkt(string nazwa, float cena,char plec) {
    this->nazwa = nazwa;
    this->cena = cena;
    this->plec = plec;
}
Produkt::~Produkt() {}
float Produkt::get_cena() {
    return this->cena;
}
string Produkt::get_nazwa() {
    return this->nazwa;
}
char Produkt::get_plec() {
    return this->plec;
}
Buty::Buty(string nazwa, float cena ,char plec, int rozmiar, string firma, string material):Produkt(nazwa,cena,plec) {
    this->firma = firma;
    this->rozmiar = rozmiar;
    this->material = material;
}
Buty::~Buty() {}
string Buty::get_firma() {
    return this->firma;
}
string Buty::get_material(){
    return this->material;
}
int Buty::get_rozmiar() {
    return this->rozmiar;
}
void Buty::wyrownaj_poziom(Pasek p, Torba t) {
    if(material == "filc"){
        p.material = "filc";
        t.material = "filc";
    }
    else if(material == "skora"){
        p.material = "skora";
        t.material = "skora";
    }
    else{
        material = "zamsz";
        p.material = "zamsz";
        t.material = "zamsz";
    }
}

Torba::Torba(string nazwa, float cena, char plec, int pojemnosc,string material):Produkt(nazwa,cena,plec) {
    this->pojemnosc = pojemnosc;
    this->material = material;
}

Torba::~Torba() {}

int Torba::get_pojemnosc() {
    return this->pojemnosc;
}
string Torba::get_material() {
    return this->material;
}
void Torba::wyrownaj_poziom(Pasek p, Buty b) {
    if(material == "filc"){
        p.material = "filc";
        b.material = "filc";
    }
    else if(material == "skora"){
        p.material = "skora";
        b.material = "skora";
    }
    else{
        material = "tworzywo sztuczne";
        p.material = "tworzywo sztuczne";
        b.material = "tworzywo sztuczne";
    }
}

Pasek::Pasek(string nazwa, float cena, char plec, int dlugosc,string material):Produkt(nazwa,cena,plec) {
    this->dlugosc = dlugosc;
    this->material = material;
}

Pasek::~Pasek() {}

int Pasek::get_dlugosc() {
    return this->dlugosc;
}
void Pasek::wyrownaj_poziom(Buty b,Torba t) {
    if(material == "filc"){
        t.material = "filc";
        b.material = "filc";
    }
    else if(material == "skora"){
        t.material = "skora";
        b.material = "skora";
    }
    else{
        material = "skora ekologiczna";
        t.material = "skora ekologiczna";
        b.material = "skora ekologiczna";
    }
}
Bizuteria::Bizuteria(string nazwa, float cena, char plec,string material):Produkt(nazwa,cena,plec) {
    this->material = material;
}

Bizuteria::~Bizuteria() {}

string Bizuteria::get_material() {
    return this->material;
}

Okulary::Okulary(string nazwa, float cena, char plec, string kolor_oprawek):Produkt(nazwa,cena,plec) {
    this->kolor_oprawek = kolor_oprawek;
}

Okulary::~Okulary() {}

string Okulary::get_kolor() {
    return this->kolor_oprawek;
}
void Okulary::zamiana_koloru(Szalik s) {
    string k = kolor_oprawek;
    kolor_oprawek = s.kolor;
    s.kolor = k;
}

Zegarek::Zegarek(string nazwa, float cena, char plec, string typ,string typ_paska):Produkt(nazwa,cena,plec) {
    this->typ = typ;
    this->typ_paska = typ_paska;
}

Zegarek::~Zegarek() {}

string Zegarek::get_typ() {
    return this->typ;
}

Portfel::Portfel(string nazwa, float cena, char plec, string kolor):Produkt(nazwa,cena,plec) {
    this->kolor = kolor;
}

Portfel::~Portfel() {}

string Portfel::get_kolor() {
    return this->kolor;
}

Koszula::Koszula(string nazwa, float cena, char plec, string kolor,string kroj):Produkt(nazwa,cena,plec) {
    this->kolor = kolor;
    this->kroj = kroj;
}

Koszula::~Koszula() {}

string Koszula::get_kolor() {
    return this->kolor;
}
string Koszula::get_kroj() {
    return this->kroj;
}

Szalik::Szalik(string nazwa, float cena, char plec, string kolor,int dlugosc):Produkt(nazwa,cena,plec) {
    this->kolor = kolor;
    this->dlugosc = dlugosc;
}

Szalik::~Szalik() {}

string Szalik::get_kolor() {
    return this->kolor;
}

int Szalik::get_dlugosc() {
    return this->dlugosc;
}
void Szalik::zamiana_koloru(Okulary o) {
    string k = kolor;
    kolor = o.kolor_oprawek;
    o.kolor_oprawek = k;
}
void Rabat::promocja(Produkt* p, float procent){
        if(procent > 0 && procent <1) {
            p->cena *= (1-procent);
          p->cena = round(p->cena);
        }
}

void Rabat::bon_zakupowy(Produkt* p, int bon) {
    (p->cena>bon)? p->cena -= bon: p->cena = 0;

}

Typ_Produktu::Typ_Produktu(string nazwa_typu) {
    this->nazwa_typu = nazwa_typu;
}
string Typ_Produktu::get_nazwa_typu() {
    return this->nazwa_typu;
}
Firma::Firma(string nazwa_firmy) {
    this->nazwa_firmy = nazwa_firmy;
}
string Firma::get_nazwa_firmy() {
    return this->nazwa_firmy;
}

Kolekcja::Kolekcja(string nazwa_kolekcji) {
    this->nazwa_kolekcji = nazwa_kolekcji;

}

string Kolekcja::get_nazwa_kolekcji() {
    return this->nazwa_kolekcji;
}

Seria::Seria(string nazwa_serii) {
    this->nazwa_serii = nazwa_serii;

}

string Seria::get_nazwa_serii() {
    return this->nazwa_serii;
}

Sklep::Sklep(string adres_sklepu) {
    this->adres_sklepu = adres_sklepu;
}

string Sklep::get_adres_sklepu() {
    return this->adres_sklepu;
}

Siec_sklepow::Siec_sklepow(string nazwa_sieci) {
    this->nazwa_sieci = nazwa_sieci;

}

string Siec_sklepow::get_nazwa_sieci() {
    return this->nazwa_sieci;
}
