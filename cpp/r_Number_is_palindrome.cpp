#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        int temp=num;
        int rev=0;
        while(temp!=0)
        {
            int rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
        }
        if(rev==num)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    } 
    return 0;
}
