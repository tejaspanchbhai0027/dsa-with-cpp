#include<iostream>
using namespace std;
int main()
{
    // 90+ - A
    // 75-90 - B
    // 24 - 75 - C
    // 0 - 24 - Fail
    int mark;
    cout<<"enter the mark : ";
    cin>>mark;
    if(mark>90)
    {
        cout<<"A Grade";
    }
    else if(mark>=75 && mark<=90)
    {
        cout<<"B Grade";
    }
    else if(mark>=24 && mark<75)
    {
        cout<<"C Grade";
    }
    else{
        cout<<"FAIL";
    }
    return 0;
}