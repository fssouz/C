#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    double raio, n, area;

    n= 3.14159;

    cin >> raio;
    area = n*(pow(raio,2.00));
    cout <<fixed << setprecision(4)<< "A=" << area << endl;
    return 0;
}