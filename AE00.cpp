#include<iostream>
#include<cmath>
int main()
{
    int i,n,k,N,counter=0;
    std::cin>>N;
    counter+=N;
    k=N/2;
    for(n=2;pow(n,2)<=N;n++)
    {
        for(i=n;i<=k;++i)
            counter++;
        k=N/(n+1);
    }
    std::cout<<counter;
    return 0;
}
