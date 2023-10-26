#include <iostream>

using namespace std;

struct dane{
    string imie;
    string nazwisko;
    string kierunek;
    int grupa;
    string nr_indeksu;

    dane(string name, string nazw, string kier, int gr, string nri):imie(name), nazwisko(nazw),
    kierunek(kier), grupa(gr), nr_indeksu(nri){}


    void wyswietl(){
        cout<<"Imie: "<<this->imie<<endl;
        cout<<"Nazwisko: "<<this->nazwisko<<endl;
        cout<<"Kierunek: "<<this->kierunek<<endl;
        cout<<"Grupa: "<<this->grupa<<endl;
        cout<<"Nr indeksu: "<<this->nr_indeksu<<endl;
    }

};

struct wyniki{
    string nr_indeksu;
    int uzyskane;
    int maksymalne;
    int ocena;

    wyniki(string nrind, int uz, int maks):nr_indeksu(nrind), uzyskane(uz), maksymalne(maks), ocena(0){}

    void wyswietl(){
        cout<<"Nr indeksu: "<<this->nr_indeksu<<endl;
        cout<<"uzyskane: "<<this->uzyskane<<endl;
        cout<<"maksymalne: "<<this->maksymalne<<endl;
        cout<<"ocena: "<<this->ocena<<endl;
    }
};


int main() {

    dane student("Adolf","Hitler","germanistyka",5,"1939");
    student.wyswietl();

    wyniki adi("1939",19,45);
    adi.wyswietl();


    return 0;
}
