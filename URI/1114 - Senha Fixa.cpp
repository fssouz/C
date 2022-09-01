#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int s,senha;
    senha = 2002;
    s = 0;
    while (s!=senha){
        cin >> s;
        if (s!=senha){
            cout << "Senha Invalida" << endl;
        }
    }
    cout << "Acesso Permitido" << endl;

    return 0;
}