#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int i=0,n;
    double sum=0;
    cout<<"Enter n"<<endl;
    cin>>n;
    while(i<=n)
    {
        if(i%2!=0)
        {
            sum += pow(i,2);
        }
        i++;
    }
    cout<<sum<<endl;
    return 0;
}