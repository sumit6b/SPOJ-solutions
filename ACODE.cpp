#include<iostream>
#include<map>
#include<string>
#define ll long long int
using namespace std;
ll num(ll);
ll fun(ll);

string s;
ll L;
map<ll,ll> mymap;

int main()
{
    while(1)
    {
        cin>>s;
        L=s.length();
        mymap.clear();
        if(s[0]=='0')
            break;
        else
        {
            cout<<fun(L)<<endl;
        }
    }
    return 0;
}

ll fun(ll n)
{
    ll a=0,b=0;
    if(n==0)
        return 1;
    else if(n==1&&s[L-1]!='0')
        return 1;
    else if(n>1)
    {
        if(s[L-n]!='0'){
        if(mymap[n-1]==0)
        {
            a = fun(n-1);
            mymap[n-1]=a;
        }
        else
            a = mymap[n-1];
        if(num(L-n))
        {
            if(mymap[n-2]==0)
            {
                b = fun(n-2);
                mymap[n-2] = b;
            }
            else
                b = mymap[n-2];
        }
        else
            b=0;
        }
    }
    return a+b;
}
ll num(ll x)
{
    ll ans;
    ans=(s[x]-'0')*10+(s[x+1]-'0');
    ans=x=='0'?27:ans;
    return ans>26?0:1;
}
