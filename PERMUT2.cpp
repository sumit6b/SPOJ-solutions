#include<iostream>
using namespace std;
#define ll int
#define gc getchar_unlocked
void scan(ll &x)
{
    register ll c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int main()
{
    int N,flag=0;
    while(1)
    {
        flag=0;

        scan(N);
        if(N==0)
            break;
        else
        {
            int *arr=new int[N+1];
            for(int i=1;i<=N;++i)
            {
                scan(arr[i]);
            }
            for(int i=1;i<=N;++i)
            {
                if(arr[arr[i]]!=i)
                {
                    cout<<"not ambiguous"<<endl;
                    flag=1;
                    break;
                }
            }
            if(!flag)
                cout<<"ambiguous"<<endl;


        }
    }
    return 0;
}
