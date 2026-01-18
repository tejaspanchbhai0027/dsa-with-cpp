#include<iostream> 
using namespace std;
int main()
{
    int n,count=1,sum=0;
    cout<<"Enter the size of N : ";
    cin>>n;
    while(count<=n)
    {
        sum = sum + count;
        count++;
    }
    cout<<sum;
    return 0;
}