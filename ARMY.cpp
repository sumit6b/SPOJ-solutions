#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define ll long
#define gc getchar_unlocked
inline ll scan(){register ll c=gc();int x=0;for(;c<'0'||c>'9';c=gc());for(;c>='0'&&c<='9';c=gc()){x=(x<<1)+(x<<3)+c-'0';}return x;}
int main()
{
    int T = scan();
    for(ll t=0;t<T;++t)
    {
        ll a = scan(),b=scan(),arra[a],arrb[b];
        for(ll i=0;i<a;++i)
        {
            arra[i]=scan();
        }
        for(ll i=0;i<b;++i)
        {
            arrb[i]=scan();
        }
        sort(arra,arra+a);
        sort(arrb,arrb+b);
        //for(ll i=0;i<a;++i){cout<<arra[i]<<"\n";}
        ll p=0,q=0;
        while(p<a&&q<b)
        {
            if(arrb[q]>arra[p]){p++;}
            else if(arra[p]>=arrb[q]){q++;}
        }
        if(q>=b){printf("Godzilla\n");}
        else if(p>=a){printf("MechaGodzilla\n");}
    }
}
