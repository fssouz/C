#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char v[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int a;
    cin >> a;
    for (int i=0; i<a;i++)
    {
        cout << v[i];
    }
    cout << endl;

    return 0;
}