#include <iostream>

using namespace std;



int main() {

    int tab[10];

    cout<<"Podaj 10 liczb"<<endl;
    for(int i=0;i<10;i++){
        cin>>tab[i];
    }

    for(int i=0;i<10;i++){
        cout<<tab[i]<<endl;
    }

    int ujemne=0;

    for(int i=0;i<10;i++){
        if(tab[i]<0)
            ujemne++;
    }

    int * minus = new int[ujemne];
    int licznik=0;

    for(int i=0;i<10;i++){
        if(tab[i]<0) {
            minus[licznik] = tab[i];
            licznik++;
        }
    }

    for(int i=0;i<ujemne;i++){
        cout<<minus[i]<<endl;
    }

    cout<<"Liczb ujemnych jest: "<<ujemne<<", przy czym pomineto: "<<10-ujemne<<" liczb dodatnich"<<endl;




    return 0;
}
