#include <iostream>
using namespace std;
int main()
{
    int i, n,reverse,sum=0,flag=1,old;
    cout << "Enter primenumber to find  :";
    cin >> n;
    old=n;
    while(n>0)  
    {  
        reverse = n%10;  
        sum = sum*10 + reverse;  
        n= n/10;  
    }  
    for(i=2;i<=sum/2;i++)
    {
        if(sum % i ==0)
        {
        flag=0;
        }
    }
    if(flag==1)
    cout<<"\nNumber before Twisted = "<<old<<"\nNumber after Twisted  = "<<sum<<"\nTwisted Number";
    else 
    cout<<"\nNumber is not twisted number ";
  

    
}
