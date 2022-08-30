#include <iostream>

using namespace std;

int main()
{
    int N, l;
    cin >> N;
    
    for (int k=0; k<N; k++){
        cin >>  l;
        if (l==0){
            cout << "NULL"<< endl;
        }
        else if (l>0 && l%2!=0){
             cout << "ODD POSITIVE"<< endl;
        }
        else if (l<0 && l%2!=0){
             cout << "ODD NEGATIVE"<< endl;
        }
        else if (l>0 && l%2==0){
             cout << "EVEN POSITIVE"<< endl;
        }
        else{
            cout << "EVEN NEGATIVE" << endl;
        }
    }

    return 0;
}