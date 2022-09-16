#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int vec[1024];
    while (n>0)
    {
        int cont=0;
        vec[cont]=(n%10);
        n=n/10;
        cout << vec[cont];
    }
    cout << endl;
    return 0;
}