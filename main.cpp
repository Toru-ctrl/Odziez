#include <iostream>
#include "produkty.h"
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

ostream& operator<<(ostream& stream,Produkt& term)
{
    stream <<"Nazwa produktu: "<< term.get_nazwa() <<" cena produktu " << term.get_cena();
    return stream;
}
ostream& operator<<(ostream& stream,Koszyk<Produkt>& term)
{
    term.wypisz();
    return stream;
}
int main() {
    Buty but1("Buty sportowe",199.99,'K',37,"Adidas","tworzywo sztuczne");
    Torba torba1("Torba podrozna Torbex",59.99,'M',25,"tworzywo sztuczne");
    Pasek pas1("Pasek skorzany meski",35,'M',40,"skora");
    Bizuteria bransoletka1("Bransoletka YES",2425.99,'K',"zloto");
    Okulary okulary1("Okulary przeciwsloneczne",29.49,'K',"czerwony");
    Zegarek zegarek1("Zegarek meski skorzany",999.99,'M',"kwarcowy","skorzany");
    Portfel portfel1("Portfel damski skorzany",129.49,'K',"czerwony");
    Koszula koszula1("Koszula flanelowa",49.99,'O',"niebieski","oversize");
    Szalik szal1("Szal uniwersalny",30,'O',"niebieski",50);

    Koszyk <Produkt> kosz1;
    kosz1.dodaj(but1);
    kosz1.dodaj(torba1);
    kosz1.dodaj(pas1);
    kosz1.dodaj(koszula1);
    //-----Operatory---------

    cout << but1 << endl;
    cout << "Koszyk:"<<endl<<kosz1<<endl;
    if(but1 == 199.99)
    {
        cout<<"Jestem rowny podajen kwocie"<<endl;
    }
    if(but1 != torba1)
    {
        cout<<"Jestem rozny podajen kwocie"<<endl;
    }
    if(but1 > torba1)
    {
        cout<<"Jestem drozszy"<<endl;
    }
    if(torba1 < but1)
    {
        cout<<"Jestem tanszy"<<endl;
    }
    cout <<"Kwota: "<<  torba1 + but1 <<endl;
    but1&100;
    cout<<but1<<endl;
    but1&&100;
    cout<<but1<<endl;
    //---Lambda----
    cout <<"Najdrozszy produkt:"<<endl;
    auto najdrozszy = [] (vector<Produkt> produkty)
    {
        auto max = produkty.begin();
        for(auto i = produkty.begin(); i != produkty.end();i++){
            if(max->get_cena() < i->get_cena())
                max = i;

        }
        return max;
    };
    auto max = najdrozszy(kosz1.get_koszyk());
    cout << *max<<endl;
    cout <<"Maksymalna cena produktow:"<<endl;
    auto y = [] (Produkt p1, Produkt p2,Produkt p3)
    {
        float max = p1.get_cena();
        if(p2 > max)
            max = p2.get_cena();
        if( p3 > max)
            max = p3.get_cena();
        return max;
    };
    cout << y(torba1,but1,bransoletka1)<<endl;

    cout <<"Filtr cen:"<<endl;
    auto filtr1 = [] (vector<Produkt> produkty, float maksymalna_cena)
    {
            Koszyk <Produkt> wynik;
            for(auto i = produkty.begin(); i != produkty.end();i++){
                if(i->get_cena() <= maksymalna_cena){
                    wynik.dodaj(*i);
                }
            }
            return wynik;
    };
    Koszyk <Produkt> k2 =  filtr1(kosz1.get_koszyk(),100);
    cout << k2;
    //cout << filtr1(kosz1.get_koszyk(),300);

    cout <<"Filtr plci:"<<endl;
    auto filtr2 = [] (vector<Produkt> produkty, char plec)
    {
        Koszyk <Produkt> wynik;
        for(auto i = produkty.begin(); i != produkty.end();i++){
            if(i->get_plec() == plec){
                wynik.dodaj(*i);
            }
        }
        return wynik;
    };
    Koszyk <Produkt> k3 =  filtr2(kosz1.get_koszyk(),'M');
    cout << k3;

    cout <<"Najtanszy produkt:"<<endl;
    auto najtanszy = [] (vector<Produkt> produkty)
    {
        auto min = produkty.begin();
        for(auto i = produkty.begin(); i != produkty.end();i++){
            if(min->get_cena() > i->get_cena())
                min = i;

        }
        return min;
    };
    auto min = najtanszy(kosz1.get_koszyk());
    cout << *min<<endl;


//
//
//    Buty* wsk_but1 = &but1;
//    Torba* wsk_torba1 = &torba1;
//    Pasek* wsk_pas1 = &pas1;
//    Bizuteria* wsk_bransoletka1 = &bransoletka1;
//    Okulary* wsk_okulary1 = &okulary1;
//    Portfel* wsk_portfel1 = &portfel1;
//    Koszula* wsk_koszula1 = &koszula1;
//    Szalik* wsk_szal1 = &szal1;
//
//    bool flaga = material(wsk_but1,wsk_torba1);
//    cout << "Przedmioty do siebie ";
//    (flaga)? cout<<"pasuja.":cout<<"nie pasuja.";
//    cout <<endl;
//   flaga = material(wsk_but1,wsk_torba1,wsk_pas1);
//    cout << "Przedmioty do siebie ";
//    (flaga)? cout<<"pasuja.":cout<<"nie pasuja.";
//    cout <<endl;
//    flaga = kolor(wsk_koszula1,wsk_portfel1, wsk_szal1,wsk_okulary1);
//    cout << "Kolory do siebie ";
//    (flaga)? cout<<"pasuja.":cout<<"nie pasuja.";
//    cout <<endl;
//    zmien_pasek(zegarek1, bransoletka1);
//
//    Koszyk <Produkt> kosz1;
//    kosz1.dodaj(but1);
//    kosz1.dodaj(torba1);
//    kosz1.dodaj(pas1);
//    kosz1.dodaj(koszula1);
//    kosz1.get_koszyk();
//    FiltrCen<Produkt> filtr1;
//    FiltrPlec<Produkt> filtr2;
//    filtr1.filtruj_ceny(kosz1.get_koszyk(),999.99);
//    filtr2.filtruj_plec(kosz1.get_koszyk(),'K');
//    char plec;
//    float  cena;
//    SprawdzPlec<Produkt> p1;
//    plec = p1.sprawdzplec(but1);
//    cout << plec << endl;
//    SprawdzCene<Produkt> c1;
//    cena = c1.sprawdzcene(zegarek1);
//    cout << cena << endl;
//    kosz1.wypisz();
//
//    Rabat rabat1;
//    cena = but1.get_cena();
//    cout << "Cena butow przed odliczeniem: "<<cena<<endl;
//    rabat1.promocja(wsk_but1,0.12);
//    cena = but1.get_cena();
//    cout << "Cena butow po odliczeniu: "<<cena<<endl;
//    cena = pas1.get_cena();
//    cout << "Cena paska przed odliczeniem: "<<cena<<endl;
//    rabat1.bon_zakupowy(wsk_pas1,20);
//    cena = pas1.get_cena();
//    cout << "Cena paska po odliczeniu: "<<cena<<endl;

}