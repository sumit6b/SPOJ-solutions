#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;
#define ll int
#define gc getchar_unlocked
inline ll scan(){register ll c=gc();int x=0;for(;c<'0'||c>'9';c=gc());for(;c>='0'&&c<='9';c=gc()){x=(x<<1)+(x<<3)+c-'0';}return x;}
int main()
{
    ll T=scan();
    for(ll t=0;t<T;++t)
    {
        ll a=scan(),b=scan(),maxia=0,maxib=0;

        for(ll i=0;i<a;++i)
        {
            ll temp=scan();
            if(temp>maxia)
            {
                maxia = temp;
            }
        }
        for(ll i=0;i<b;++i)
        {
            ll temp=scan();
            if(temp>maxib)
            {
                maxib = temp;
            }
        }
        if(maxia>=maxib){printf("Godzilla\n");}
        else{printf("MechaGodzilla\n");}
    }
}
