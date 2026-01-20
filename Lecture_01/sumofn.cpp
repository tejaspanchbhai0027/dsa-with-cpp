#include<iostream> 
using namespace std;
int main()
{
    int n,count=1,sum=0;
    cout<<"enter the size of N : ";
    cin>>n;
    while(n>=count)
    {
        sum=count+sum;
        count++;
    }
    cout<<sum;
}