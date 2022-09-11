#include <iostream>

using namespace std;

int main()
{
    int v[10];
    cin >> v[0];
    cout << "N[" << 0 << "] = " << v[0] << endl;
    for (int k=1; k<10; k++)
    {
        v[k] = v[k-1]*2;
        cout << "N[" << k << "] = " << v[k] << endl;
    }

    return 0;
}
