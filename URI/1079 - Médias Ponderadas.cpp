#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N;
    float a, b, c;
    cin >> N;
    
    for (int k=0; k<N; k++){
        cin >>  a >> b >> c;
        float conta = ((2*a)+(3*b)+(5*c))/10;
        cout << fixed << setprecision (1) << conta << endl;
    }

    return 0;
}