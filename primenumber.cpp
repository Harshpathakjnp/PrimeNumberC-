//Prime number .......
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n,i,count=0;
cout<<"Enter Number to check Prime :";
cin>>n;
int limit=(int)sqrt(n);
for(i=2;i<=limit;i++)
{
    if(n%i==0)
    {
        count++;
        break;
    }

}

if(count==0)
cout<<n<<" is a Prime Number ";
else
cout<<n<<" is not Prime Number ";
}