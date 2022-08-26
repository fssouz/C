#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int t,n1,n2,n3;
    cin>> t;
    
    n1 = t/3600;
    n2 = (t-(n1*3600))/60;
    n3 = (t-((n1*3600)+(n2*60)));
    
    cout << n1 << ":" << n2<< ":" << n3 <<endl;
    return 0;
}