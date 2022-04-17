#include <iostream>
using namespace std;
int main()
{
    int i, n, x=2, flag,count=0,smallest=0;
    cout << "Enter number to find  :";
    cin >> n;
    while (x < n)
    {
        flag = 0;
        for (i = 2; i <= x / 2; i++)
        {

            if (x % i == 0)
            {
                flag = 1;

            }
        }
        if (flag == 0)
        {
            if(n%x==0)
            smallest=x;
            
        }
        x++;
        if(smallest>0)
        break;

    }
   if(smallest==0)
   cout<<"not Found ";
   else
    cout <<smallest<< ",";
}
