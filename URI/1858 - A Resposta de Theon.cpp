#include <iostream>

using namespace std;

int main()
{
    int i, pos, me;
    cin >> i;
    int E [i];
    for (int a=0; a<i;a++)
    {
        cin >> E[a];
        if (E[a]<me || a==0)
        {
            me = E[a];
            pos = a;
        }
    }
    cout << pos+1 << endl;

    return 0;
}