#include<iostream>
#include<math.h>
using namespace std;
int* constructprime(int n);
int primegen(int m,int n);
int k = 0;
int main()
{
    int m,n,t,i,j;
    cin>>t;
    int store[t][2];
    store[t][2];
    for(i=0;i<t;++i)
    {
        for(j=0;j<2;++j)
        {
            cin>>store[i][j];
        }
    }

    for(i=0;i<t;++i)
    {
        if(i!=0)
            cout<<endl;
        if(store[i][0]==1) store[i][0]=2;
        primegen(store[i][0],store[i][1]);

    }

    return 0;
}

int* constructprime(int n)
{
    int *prime = new int[n],i,j;
    int *a = new int[n];
    for(i=0;i<n-1;++i)
    {
        a[i] = i+2;
    }
    for(j=2;j<sqrt(n);j==2?j++:j+=2)
    {
        for(i=j-2;i<n-1;i+=j)
        {
            if(a[i]!=j&&a[i]%j==0)
                a[i]=0;
        }
    }
    k=0;
    for(i=0;i<n-1;i++)
    {
        if(a[i]!=0)
        {
            prime[k++]=a[i];
        }
    }
    int *res = new int[k];
    for(i=0;i<k;i++)
        {
            res[i]=prime[i];
        }
    delete a,prime;
    return res;

}

int primegen(int m,int n)
{

    int i,j, *prime,diff = n-m,arr[diff+1],num;
    prime = constructprime(sqrt(n));

    for(i=0;i<diff+1;++i)
    {
        arr[i] = m+i;
    }
    int a = arr[0];
    for(j=0;j<k;++j)
    {
        for(i=0;i<diff+1;i+=prime[j])
        {

            if(i==0)
            {
                num = (a/prime[j])*prime[j];
                if(num-a==0) i = num-a;
                else if(num-a!=0) i = num-a+prime[j];
            }
            if(arr[i]==prime[j])
                continue;

            if(arr[i]%prime[j]==0)
            {
                arr[i]=0;
            }
        }
    }
    for(i=0;i<diff+1;++i)
    {
        if(arr[i]!=0)
            {
                if(i==0)
                    cout<<arr[i];
                else
                    cout<<endl<<arr[i];
            }
    }
    return 0;
}

