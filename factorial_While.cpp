#include<iostream>
using namespace std;

int main()
{
    int n,i=1,mul=1;
    cout<<"Enter n"<<endl;
    cin>>n;
    while(i<=n)
    {
        mul *= i;
        i++;
    }
    cout<<mul<<endl;
}