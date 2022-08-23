#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, h;
    float v, s;
    
    cin>> n;
    cin>> h;
    cin>> v;
    s = h*v;
    
    cout << "NUMBER = " << n << endl;
    cout <<fixed << setprecision(2)<< "SALARY = U$ " << s << endl;
    return 0;
}