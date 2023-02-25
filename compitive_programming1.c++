#include<iostream>
using namespace std;
int main()
{
    int num,i,newnum=0,rem;
    cout<<"enter the number:";
    cin>>num;
    i=num;
    while(i>0)
    {
        rem=i%10;
        newnum=newnum*10+rem;
        i=i/10;
    }
    if(num==newnum)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false";
    }
}