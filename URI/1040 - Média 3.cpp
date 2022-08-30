#include <iostream>
#include <iomanip>
using namespace std;
 
int main() 
{
    float N1, N2, N3, N4;
    cin>> N1 >> N2 >> N3 >> N4;
    float media = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;
    cout << fixed << setprecision(1)<< "Media: " << media << endl;
    
    if (media<5)
    {
        cout << "Aluno reprovado."<< endl;
    }
    else if (media>=5 && media<7)
    {
        cout << "Aluno em exame."<< endl;
        float e;
        cin >> e;
        media = (media+e)/2;
        if (media>=5)
        {
            cout << fixed << setprecision(1)<< "Nota do exame: " << e << endl;
            cout << "Aluno aprovado."<< endl;
            cout << fixed << setprecision(1)<< "Media final: " << media << endl;
        }
        else
        {
            cout << fixed << setprecision(1)<< "Nota do exame: " << e << endl;
            cout << "Aluno reprovado."<< endl;
            cout << fixed << setprecision(1)<< "Media final: " << media << endl;
        }
    }
    else
    {
    cout << "Aluno aprovado."<< endl;
    }
    return 0;
}