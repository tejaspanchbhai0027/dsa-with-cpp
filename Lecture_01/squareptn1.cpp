#include<iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=0; i<n; i++)
    {
        char ch='A';
        for(int j=0; j<n; j++)
        {
            cout<<ch;
            ch=ch+1;
        }
        cout<<endl;
    }
    return 0;
}
// output
// cout<<j+1<<" ";
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
//cout<<"* ";
// * * * * 
// * * * *
// * * * *
// * * * *
// cout<<i+1<<" ";
// 1 1 1 1 
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4
