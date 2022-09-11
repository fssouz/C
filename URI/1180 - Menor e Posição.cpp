#include <iostream>

using namespace std;

int main()
{
    int N, menor, pos;
    cin >> N;
    int X [N];

    for (int a=0; a<N; a++)
    {
        cin >> X[a];
        if (X[a]<menor || a==0)
        {
            menor=X[a];
            pos = a;
        }
    }
    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << pos << endl;
    return 0;
}