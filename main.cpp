#include <iostream>
#include "produkty.h"

//Nowy push
using namespace std;
bool material(Buty* p1, Torba* p2, Pasek* p3 =NULL)
{
    if(p1->material != p2->material) return false;
    if(p3){
        if(p1->material != p3->material) return false;
    }
    return true;

}

bool kolor(Koszula* k1,Portfel* k2, Szalik* k3, Okulary* k4){
    bool czerwony = false;
    bool niebieski = false;
    bool zolty = false;
    bool zielony = false;
    bool pomaranczowy = false;
    if(k1->kolor == "czerwony"||k2->kolor=="czerwony"||k3->kolor=="czerwony"||k4->kolor_oprawek=="czerwony") czerwony = true;
    if(k1->kolor == "niebieski"||k2->kolor=="niebieski"||k3->kolor=="niebieski"||k4->kolor_oprawek=="niebieski") niebieski = true;
    if(k1->kolor == "zolty"||k2->kolor=="zolty"||k3->kolor=="zolty"||k4->kolor_oprawek=="zolty") zolty = true;
    if(k1->kolor == "zielony"||k2->kolor=="zielony"||k3->kolor=="zielony"||k4->kolor_oprawek=="zielony") zielony = true;
    if(k1->kolor == "pomaranczowy"||k2->kolor=="pomaranczowy"||k3->kolor=="pomaranczowy"||k4->kolor_oprawek=="pomaranczowy") pomaranczowy = true;
    if(czerwony && zielony) return false;
    if(zielony && pomaranczowy) return false;
    if(czerwony && pomaranczowy) return false;
    if(niebieski && zolty) return false;
    return true;
}

void zmien_pasek(Zegarek z1, Bizuteria z2)
{
    if(z2.material == "zloto") z1.typ_paska = "stal";
    if(z2.material == "srebro") z1.typ_paska = "skora";
    if(z2.material == "zemyk") z1.typ_paska ="zemyk";
}


int main() {
    Buty but1("Buty sportowe",199.99,'K',37,"Adidas","tworzywo sztuczne");
    Torba torba1("Torba podrozna Torbex",59.99,'M',25,"tworzywo sztuczne");
    Pasek pas1("Pasek skorzany meski",35,'M',40,"skora");
    Bizuteria bransoletka1("Bransoletka YES",24295,'K',"zloto");
    Okulary okulary1("Okulary przeciwsloneczne",29.49,'K',"czerwony");
    Zegarek zegarek1("Zegarek meski skorzany",999.99,'M',"kwarcowy","skorzany");
    Portfel portfel1("Portfel damski skorzany",129.49,'K',"czerwony");
    Koszula koszula1("Koszula flanelowa",49.99,'O',"niebieski","oversize");
    Szalik szal1("Szal uniwersalny",30,'O',"niebieski",50);


    Buty* wsk_but1 = &but1;
    Torba* wsk_torba1 = &torba1;
    Pasek* wsk_pas1 = &pas1;
    Bizuteria* wsk_bransoletka1 = &bransoletka1;
    Okulary* wsk_okulary1 = &okulary1;
    Portfel* wsk_portfel1 = &portfel1;
    Koszula* wsk_koszula1 = &koszula1;
    Szalik* wsk_szal1 = &szal1;

    bool flaga = material(wsk_but1,wsk_torba1);
    cout << "Przedmioty do siebie ";
    (flaga)? cout<<"pasuja.":cout<<"nie pasuja.";
    cout <<endl;
   flaga = material(wsk_but1,wsk_torba1,wsk_pas1);
    cout << "Przedmioty do siebie ";
    (flaga)? cout<<"pasuja.":cout<<"nie pasuja.";
    cout <<endl;
    flaga = kolor(wsk_koszula1,wsk_portfel1, wsk_szal1,wsk_okulary1);
    cout << "Kolory do siebie ";
    (flaga)? cout<<"pasuja.":cout<<"nie pasuja.";
    cout <<endl;
    zmien_pasek(zegarek1, bransoletka1);

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

    Rabat rabat1;
    cena = but1.get_cena();
    cout << "Cena butow przed odliczeniem: "<<cena<<endl;
    rabat1.promocja(wsk_but1,0.12);
    cena = but1.get_cena();
    cout << "Cena butow po odliczeniu: "<<cena<<endl;
    cena = pas1.get_cena();
    cout << "Cena paska przed odliczeniem: "<<cena<<endl;
    rabat1.bon_zakupowy(wsk_pas1,20);
    cena = pas1.get_cena();
    cout << "Cena paska po odliczeniu: "<<cena<<endl;

}