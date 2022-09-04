#include <iostream>

using namespace std;
 
int main() {
 
    int valor, troco, cem, cinquenta, vinte, dez, cinco, dois, um;
    
    cin>> valor;
    troco = valor;
    
    cem = troco / 100;
    troco = troco%100;
    
    cinquenta = troco / 50;
    troco = troco%50;
    
    vinte = troco / 20;
    troco = troco%20;
    
    dez = troco / 10;
    troco = troco%10;
    
    cinco = troco / 5;
    troco = troco%5;
    
    dois = troco / 2;
    troco = troco%2;
    
    cout<< valor << endl;
    cout<< cem <<" nota(s) de R$ 100,00" << endl;
    cout<< cinquenta <<" nota(s) de R$ 50,00" << endl;
    cout<< vinte <<" nota(s) de R$ 20,00" << endl;
    cout<< dez <<" nota(s) de R$ 10,00" << endl;
    cout<< cinco <<" nota(s) de R$ 5,00" << endl;
    cout<< dois <<" nota(s) de R$ 2,00" << endl;
    cout<< troco <<" nota(s) de R$ 1,00" << endl;
    return 0;
}