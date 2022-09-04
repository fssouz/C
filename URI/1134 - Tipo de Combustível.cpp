#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, alc, dis, gas;
    alc=0;
    gas=0;
    dis=0;
    n=5;
    while (n!=4)
    {
    cin >> n;
        if (n==1)
        {
            alc+= 1;
        }
        else if(n==2)
        {
            gas+=1;
        }
        else if (n==3)
        {
            dis+=1;   
        }
    }
    cout<< "MUITO OBRIGADO" << endl;
    cout<< "Alcool: " << alc << endl;
    cout<< "Gasolina: " << gas << endl;
    cout<< "Diesel: " << dis << endl;
    return 0;
}