#include<iostream>
using namespace std;

int main()
{
    int i=0,n,sum=0;
    cout<<"Enter n"<<endl;
    cin>>n;
    while(i<=n)
    {
        if(i%2==0)
            sum+=i;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}