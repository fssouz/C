#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int qua;
    long long x, y;
    cin >> qua;
    for (int a=0; a<qua;a++)
    {
        char texto[2][100];
        char f1[5], f2[5];
        cin >> texto[0] >> f1; 
        cin >> texto[1] >> f2;
        cin >> x >> y;
        if ( ((x%2)==0) and  ((y%2)==0))
        {
            if (f1[0]=='P')
            {
                cout << texto[0] << endl;
            }
            else
            {
                cout << texto[1] << endl;
            }
        }
        else if ( ((x%2)!=0) and  ((y%2)!=0))
        {
            if (f1[0]=='P')
            {
                cout << texto[0] << endl;
            }
            else
            {
                cout << texto[1] << endl;
            }
        }
        else
        {
            if (f1[0]=='I')
            {
                cout << texto[0] << endl;
            }
            else
            {
                cout << texto[1] << endl;
            }
        }
    }
    return 0;
}
