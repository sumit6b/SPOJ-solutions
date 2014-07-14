#include<iostream>
#define ll unsigned long long
using namespace std;
ll f(ll);
int main()
{
    ll T,i,n;
    cin>>T;
    for(i=0;i<T;++i){cin>>n;cout<<f(n)<<endl;}
}

ll f(ll n)
{
    ll a;
    a=n%2==0?n*(n-2)/4:(n-1)*(n-1)/4;
    return (n*n)+n*(n+1)*(2*n+1)/12-n*(n+1)/4+((n-2)*(n-1)*n/6-a)/2;
}
