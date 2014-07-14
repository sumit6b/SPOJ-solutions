#include<iostream>
using namespace std;

int main()
{
    int T,s = 0,i=0,n;
    cin>>T;
    int a[T];
    for(;i<T;i++)
    {
        cin>>n;
        n>0?a[i] = n:a[i] = 0;
    }
    for(i=0;i<T;)
        s += a[i++];
    cout<<s;
    return 0;

}
