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
    ll s=0,a,sb=0,i;
    if(n==1) return 1;
    else if(n==2) return 5;
    else if(n==3) return 13;
    else
    {for(ll i=2;i<=n/2;++i){a=3*n-6*i;s+=a;}
        if(n%2==0)s++;
        for(i=0,a=2;a>=1;i++){a=(n-3-i);sb+=a;}
        return 9*n-14+s+sb*3+f(n-3);}
}
