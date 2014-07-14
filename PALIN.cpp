#include<iostream>
#include<cmath>
#define ll long long

int printSolution(ll);
int length(ll);
int checknine(ll n);
ll reverse(ll);
int helpme(ll higher);
int main()
{
    int T;
    std::cin>>T;
    ll arr[T];
    for(int i=0;i<T;++i)
    {
        std::cin>>arr[i];
    }
    for(int i=0;i<T;++i)
    {
        if(i==0) printSolution(arr[i]);
        else
        {
            std::cout<<std::endl;
            printSolution(arr[i]);
        }
    }
    return 0;
}

int printSolution(ll n)
{
    int l;
    l = length(n);
    int higher,lower,mid;
    if(l<=1){std::cout<<n+1;return 0;}
    else if(checknine(n))
    {
        std::cout<<1;
        for(int i=0;i<l-1;i++)
        {
            std::cout<<0;
        }
        std::cout<<1;
    }
    else if(l%2==0)
    {
        lower = n%(int)(pow(10,l/2)+0.5);
        higher = n/(int)(pow(10,l/2)+0.5);
        std::cout<<higher<<" "<<lower<<"\n";
        if(higher>lower)
        {

            ll low = reverse(higher);
            if(low<lower){higher++;low=reverse(higher);}
            std::cout<<higher<<low;
            return 0;
        }
        else if(higher<=lower)
        {
            ll low = reverse(higher);
            if(low<lower)
            {
                higher++;
                if(higher%10==0){helpme(higher);return 0;}
                low=reverse(higher);

            }
            std::cout<<higher<<low;
            return 0;
        }

    }
    else if(l%2!=0)
    {
        lower = n%(int)(pow(10,l/2)+0.5);
        higher = n/(int)(pow(10,l/2+1)+0.5);
        mid = (n/(int)(pow(10,l/2)+0.5))%10;
        if(lower<higher)
        {
            lower = reverse(higher);
            std::cout<<higher<<mid<<lower;
            return 0;
        }
        else if(higher<=lower)
        {

            int low = reverse(higher);
            if(low<lower){if(mid==9)higher++; mid++; low=reverse(higher);}
            std::cout<<higher<<mid%10<<low;
            return 0;
        }

    }
    return 0;

}

ll reverse(ll n)
{
    int i,l=length(n);int arr[l];
    for(i=0;i<l;++i)
    {
        arr[i] = n%10;
        n /=10;
    }
    for(n=0,i=0;i<l;++i)
    {
        n = n*10+arr[i];
    }
    return n;


}

int length(ll n)
{
    ll k=0,a=n;
    if(n==0) return 1;
    while(n!=0)
    {
        n=n/10;
        k++;
    }
    return k;
}

int checknine(ll n)
{
    int a,k=0;
    while(n!=0)
    {
        a=n%10;
        if(a!=9)
            return 0;
        else if(a==9)
        {
            n=n/10;
            k++;
        }
    }
    return k;
}

int helpme(ll n)
{
    int l=length(n),i,arr[l];
    //std::cout<<l<<"\n";
    for(i=0;i<l;++i)
    {
        arr[i]=n%10;
        n/=10;
    }
    for(i=l-1;i>=0;i--)
    {
        std::cout<<arr[i];
    }
    for(i=0;i<l;++i)
    {
        std::cout<<arr[i];
    }
    return 0;
}

