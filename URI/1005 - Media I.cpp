#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float A, B, media;
    cin>> A;
    cin>> B;
    media = ((A*3.5)+(B*7.5))/11;
    
    cout <<fixed << setprecision(5)<< "MEDIA = " << media << endl;
    return 0;
}