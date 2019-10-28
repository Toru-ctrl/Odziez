#include <iostream>
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
Buty::Buty(string nazwa, float cena ,char plec, int rozmiar, string firma):Produkt(nazwa,cena,plec) {
    this->firma = firma;
    this->rozmiar = rozmiar;
}
Buty::~Buty() {}
string Buty::get_firma() {
    return this->firma;
}
int Buty::get_rozmiar() {
    return this->rozmiar;
}

Torba::Torba(string nazwa, float cena, char plec, int pojemnosc):Produkt(nazwa,cena,plec) {
    this->pojemnosc = pojemnosc;
}

Torba::~Torba() {}

int Torba::get_pojemnosc() {
    return this->pojemnosc;
}

Pasek::Pasek(string nazwa, float cena, char plec, int dlugosc):Produkt(nazwa,cena,plec) {
    this->dlugosc = dlugosc;
}

Pasek::~Pasek() {}

int Pasek::get_dlugosc() {
    return this->dlugosc;
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

Zegarek::Zegarek(string nazwa, float cena, char plec, string typ):Produkt(nazwa,cena,plec) {
    this->typ = typ;
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
