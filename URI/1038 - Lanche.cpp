#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int C,q;
	double f;
	cin>> C >> q;
	
	if(C==1) {
	    f = 4*q;
	}
	else if (C==2) {
	    f = 4.5*q;
	}
	else if (C==3) {
	    f = 5*q;
	}
	else if (C==4) {
	    f = 2*q;
	}
	else if (C==5) {
	    f = 1.5*q;
	}
    cout <<fixed << setprecision(2)<< "Total: R$ " << f << endl;
    return 0;
}