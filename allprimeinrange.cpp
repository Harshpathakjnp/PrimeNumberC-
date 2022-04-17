#include <iostream>
using namespace std;
int main()
{
    int i, n, x, flag,count=0;
    cout << "Enter number from wher to start :";
    cin >> x;
    cout << "Enter number upto where we have to end :";
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
            cout << x << ",";
            count++;
        }
        x++;
    }
    cout<<"\nTotal Prime Numbers are : "<<count;
}
