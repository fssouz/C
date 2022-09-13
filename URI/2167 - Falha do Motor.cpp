#include <iostream>

using namespace std;

int
main ()
{
  int n, menor, pos, foi;
  cin >> n;
  int i[n];
  pos = -1;
  for (int a = 0; a < n; a++)
    {
        cin >> i[a];
    }
      for (int a = 0; a < n; a++)
    {
        if (i[a]>i[a+1])
        {
	        pos = a+1;
	        break;
        }
    }
    cout << pos+1 << endl;
  return 0;
}