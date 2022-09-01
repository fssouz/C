#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N, x, y;
    int imp=0;
    cin >> N;
    
    for (int k=0; k<N; k++)
    {
        cin >> x >> y;
        if (x>y){
            x=x-1;
            for (x;x>y;x--){
                if (x%2!=0){
                    imp += x;
                }
            }
        }
        else{
            x=x+1;
            for (x;x<y;x++){
                if (x%2!=0){
                    imp += x;
                }
            }
        }
        cout<< imp << endl;
        imp =0;
    }
    return 0;
}