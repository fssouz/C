#include <iostream>
#include <math.h> 
#include <iomanip>
using namespace std;

int main() {
	double A,B,C,D,bh,r1,r2;
	cin>> A >>B >> C;
    
    if (A>0) 
    {
        bh = (pow(B,2)) - (4*A*C);
        if (bh>=0) 
        {
            r1 = (-(B) + sqrt(bh))/(2*A);
            r2 = (-(B) - sqrt(bh))/(2*A);
            cout <<fixed << setprecision(5)<< "R1 = " << r1<<endl;
            cout <<fixed << setprecision(5)<< "R2 = " << r2<<endl;
        }
        else 
        {
            cout << "Impossivel calcular" << endl;
        }
    }
    else 
    {
        cout << "Impossivel calcular" << endl;
    }
    return 0;
}