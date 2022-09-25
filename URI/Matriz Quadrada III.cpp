#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;

int main()
{
    int o;
    cin >>o;
    while (o>=0 && o<=15)
    {
        if (o==0)
        {
            break;
        }
        else 
        {
            int m[o][o];
            for (int a=0;a<o;a++)
            {
                for (int b=0; b<o;b++)
                {
                    m[a][b]= pow(2,(a+b));
                } 
            }
            int mdi[o][o];
            for (int a=0;a<o;a++)
            {
                for (int b=0; b<o;b++)
                {
    				int cdi=0;
    				int g= m[a][b];
                    if (g==0)
    				{
    					mdi[a][b]=1;
    				}
    				else
    				{ 
    					while (g>0)
    					{
    						g = g/10;
    						cdi+=1;
    					}
    				mdi[a][b]=cdi;
    				 //cout << m[a][b]<< " tem " << mdi[a][b]<<" Digitos" << endl;
    				}
                } 
            }
            for (int c=0; c<o;c++)
            {
             for (int d=0;d<o;d++)
             {
                 int esp=(mdi[o-1][o-1]+1) - mdi[c][d];
                 if (d==0)
                 {
                    for(int e=0;e<esp-1;e++)
                    {
                        cout << " ";
                    }
                 }
                 else 
                 {
                     for(int e=0;e<esp;e++)
                    {
                        cout << " ";
                    }
                 }
                 
                 cout << m[c][d];
             }
             cout << endl;
            }
            cout << endl;
        }
        cin >>o;
    }

    return 0;
}