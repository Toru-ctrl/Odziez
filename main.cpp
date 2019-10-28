#include <iostream>
#include "produkty.h"
using namespace std;

int main() {
    Buty but1("Buty sportowe",199.99,'K',37,"Adidas");
    Torba torba1("Torba podrozna Torbex",59.99,'M',25);
    Pasek pas1("Pasek skurzany meski",35,'M',40);
    Bizuteria bransoletka1("Bransoletka YES",24295,'K',"zloto");
    Okulary okulary1("Okulary przeciwsloneczne",29.49,'K',"czerwony");
    Zegarek zegarek1("Zegarek meski skorzany",999.99,'M',"kwarcowy");
    Portfel portfel1("Portfel damski skorzany",129.49,'K',"czerwony");
    Koszula koszula1("Koszula flanelowa",49.99,'O',"zielona","oversize");
    Szalik szal1("Szal uniwersalny",30,'O',"szary",50);

    Koszyk <Produkt> kosz1;
    kosz1.dodaj(but1);
    kosz1.dodaj(torba1);
    kosz1.dodaj(pas1);
    kosz1.dodaj(koszula1);
    kosz1.get_koszyk();
    FiltrCen<Produkt> filtr1;
    FiltrPlec<Produkt> filtr2;
    filtr1.filtruj_ceny(kosz1.get_koszyk(),999.99);
    filtr2.filtruj_plec(kosz1.get_koszyk(),'K');
    char plec;
    float  cena;
    SprawdzPlec<Produkt> p1;
    plec = p1.sprawdzplec(but1);
    cout << plec << endl;
    SprawdzCene<Produkt> c1;
    cena = c1.sprawdzcene(zegarek1);
    cout << cena << endl;
    kosz1.wypisz();

}