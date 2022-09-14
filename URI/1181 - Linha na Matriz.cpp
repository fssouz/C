#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    float m[12][12];
    char re;
    int l;
    cin >>l;
    cin >> re;
    for (int a=0;a<=11;a++)
    {
       for (int b=0;b<=11;b++)
       {
         cin >> m[a][b];
       }
    }
    float soma=0;
    for (int d=0;d<=11;d++)
    {
        soma += m[l][d];
    }
    if (re=='M')
    {
        cout << fixed << setprecision (1) << (soma/12)<< endl;
    }
    else
    {
        cout << fixed << setprecision (1) << (soma) << endl;
    }
    return 0;
}
