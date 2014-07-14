#include<iostream>
#include<cmath>
#include<climits>
int printSolution(int,long,long[]);
int main()
{
    int T;
    std::cin>>T;
    long arrprob[100][2000], arrK[T];
    int arrN[T],i,j;
    for(i=0;i<T;i++)
    {
        std::cin>>arrN[i]>>arrK[i];
        for(j=0;j<arrN[i];j++)
            std::cin>>arrprob[T][j];
    }
    for(i=0;i<T;i++)
    {
        if(i==0)
            printSolution(arrN[i],arrK[i],arrprob[i]);
        else
        {
            std::cout<<std::endl;
            printSolution(arrN[i],arrK[i],arrprob[i]);
        }
    }
    return 0;
}

int printSolution(int N,long K,long arrprob[])
{
    long arrsol[N],val = K/2,mina=LLONG_MAX	,minb=LLONG_MAX	,counter=0,valmina,valminb;
    int i;
    for(i =0;i<N;i++)
    {
        arrsol[i] = abs(arrprob[i]-val);
    }
    for(i=0;i<N;i++)
    {
        if(mina>arrsol[i])
            {
                mina=arrsol[i];
                valmina = arrprob[i];
                std::cout<<"val of min a"<<valmina<<std::endl;
            }
    }
    for(i=0;i<N;i++)
    {
        if(minb>arrsol[i])
        {
            if(minb!=mina)
            {
             minb=arrsol[i];
             valminb = arrprob[i];
            }
            else
                continue;
        }

    }
    for(i=0;i<N;i++)
    {
        if(minb = arrsol[i])
            counter++;
    }

    std::cout<<valmina+valminb-K<<" "<<counter;
    return 0;

}
