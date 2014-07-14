#include<iostream>
#define ll long long
#define e else if
using namespace std;
int p(ll,ll);
int main()
{
    int i,T;cin>>T;
    ll a[T][2];
    for(i=0;i<T;++i) cin>>a[i][0]>>a[i][1];
    for(i=0;i<T;++i)
    {
        if(i==0)
            p(a[i][0],a[i][1]);
        else
        {
            cout<<endl;
            p(a[i][0],a[i][1]);
        }
    }
    return 0;
}
int p(ll a, ll b){
    int x;if(b==0)x=1;
    e(b==1)x=a%10;
    e(a%10==0&&b!=0)x=0;
    e(a%10==1)x=1;
    else{
    a%=10;
    int arr[9][4] ={{6,2,4,8},{1,3,9,7},{6,4,6,4},{5,5,5,5},{6,6,6,6},{1,7,9,3},{6,8,4,2},{1,9,1,9}};
    x=arr[a-2][b%4];
    }
    cout<<x;
    return 0;
}
