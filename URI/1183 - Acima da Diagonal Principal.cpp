#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    float m[12][12];
    char re;
    cin >> re;
    for (int a=0;a<=11;a++)
    {
       for (int b=0;b<=11;b++)
       {
           cin >> m[a][b];
       }
    }
    int co = 1;
    int fi = 11;
    float soma=0;
    for(int c=0;c<11;c++)
    {
        if (c>0)
        {
            co += 1;
        }
        for (int d=co;d<=fi;d++)
        {
            soma += m[c][d];
        }
    }
    if (re=='M')
    {
        cout << fixed << setprecision (1) << (soma/66)<< endl;
    }
    else
    {
        cout << fixed << setprecision (1) << (soma) << endl;
    }
    return 0;
}
