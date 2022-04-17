#include <iostream>
using namespace std;
int main()
{
    int i, n, x=1, flag,count=0,largest;
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
            largest=x;
        }
        x++;
    }
    if(largest==1)
    cout<<"Not Found";
    else
    cout << largest<< ",";
}
