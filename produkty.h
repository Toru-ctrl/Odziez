#include <iostream>
#include <vector>

using namespace std;

class Torba; class Pasek; class Bizuteria; class Koszula; class Szalik;class Portfel; class Zegarek;
class Produkt{
    string nazwa;
    float cena;
    char plec; // K,M,O
public:
    Produkt(string, float,char='O');
    ~Produkt();
    string get_nazwa();
    float get_cena();
    char get_plec();

};

class Buty: public Produkt{
    int rozmiar;
    string firma,material;
public:
    Buty(string, float,char, int, string,string);
    ~Buty();
    int get_rozmiar();
    string get_firma();
    string get_material();
    friend bool material(Buty* p1, Torba* p2, Pasek* p3);
};

class Torba:public Produkt{
    int pojemnosc;
    string material;
public:
    Torba(string,float,char,int,string);
    ~Torba();
    int get_pojemnosc();
    string get_material();
    friend bool material(Buty* p1, Torba* p2, Pasek* p3);
};
class Pasek:public Produkt{
    int dlugosc;
    string material;
public:
    Pasek(string,float,char,int,string);
    ~Pasek();
    int get_dlugosc();
    friend bool material(Buty* p1, Torba* p2, Pasek* p3);
};
class Bizuteria:public Produkt{
    string material;
public:
    Bizuteria(string,float,char,string);
    ~Bizuteria();
    string get_material();
    friend void zmien_pasek(Zegarek, Bizuteria);
};
class Okulary:public Produkt{
    string kolor_oprawek;
public:
    Okulary(string,float,char,string);
    ~Okulary();
    string get_kolor();
   friend bool kolor(Koszula*,Portfel*, Szalik*, Okulary*);
};

class Zegarek:public  Produkt{
    string typ,typ_paska;
public:
    Zegarek(string,float,char,string,string);
    ~Zegarek();
    string get_typ();
    friend void zmien_pasek(Zegarek, Bizuteria);
};

class Portfel:public Produkt{
    string kolor;
public:
    Portfel(string,float,char,string);
    ~Portfel();
    string get_kolor();
    friend bool kolor(Koszula*,Portfel*, Szalik*, Okulary*);
};
class Koszula:public Produkt{
    string kolor,kroj;
public:
    Koszula(string,float,char,string,string);
    ~Koszula();
    string get_kolor();
    string get_kroj();
    friend bool kolor(Koszula*,Portfel*, Szalik*, Okulary*);
};
class Szalik:public Produkt{
    string kolor;
    int dlugosc;
public:
    Szalik(string,float,char,string,int);
    ~Szalik();
    string get_kolor();
    int get_dlugosc();
    friend bool kolor(Koszula*,Portfel*, Szalik*, Okulary*);

};
template <typename T>
class Koszyk
{
    vector<T> kosz;
public:
    void dodaj(T obiekt){
        this->kosz.push_back(obiekt);
    }
    vector<T> get_koszyk()
    {
        return this->kosz;
    }
    void wypisz(){
        string nazwa1;
        float cena1;
        char plec1;
        int j =1;
        for(auto i = kosz.begin(); i != kosz.end();i++){
            nazwa1 = i->get_nazwa();
            cena1  = i->get_cena();
            plec1  = i->get_plec();
            cout<< j<<". Nazwa produktu: "<< nazwa1 << ". Cena produktu: "<< cena1 << ". Produkt przeznaczony dla ";
            if(plec1 == 'K') cout<< "Kobiet.";
            if(plec1 == 'M') cout<< "Mezczyzn.";
            if(plec1 == 'O') cout<< "obydwu plci.";
            cout<<endl;
            j++;
            }
        }

};
template <typename C>
class FiltrCen{
public:
    vector<C> filtruj_ceny(vector<C> produkty, float maksymalna_cena){
        vector<C> wynik;
        for(auto i = produkty.begin(); i != produkty.end();i++){
            if(i->get_cena() <= maksymalna_cena){
                wynik.push_back(*i);
            }
        }
        return wynik;
    }
};
template <typename P>
class FiltrPlec{
public:
    vector<P> filtruj_plec(vector<P> produkty, char plec){
        vector<P> wynik;
        for(auto i = produkty.begin(); i != produkty.end();i++){
            if(i->get_plec() ==  plec){
                wynik.push_back(*i);
            }
        }
        return wynik;
    }
};
template<class O>
class SprawdzPlec{
public:
    char sprawdzplec(O obiekt){
        return (char)obiekt.get_plec();
    }
};

template<class E>
class SprawdzCene{
public:
    float sprawdzcene(E obiekt){
        return (float)obiekt.get_cena();
    }
};