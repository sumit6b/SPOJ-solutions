#include<iostream>
#include<deque>
#include<cmath>
int printSolution(int);
int main()
{
    int i,k=0,n;
    std::deque<int> myDeque;
    while(1)
    {
        std::cin>>n;
        if(n==0)
        {
            break;
        }
        else
        {
            myDeque.push_back(n);
            k++;
        }
    }
    for(i=0;i<k;++i)
    {
        if(i==0)
            printSolution(myDeque[i]);
        else
        {
            std::cout<<std::endl;
            printSolution(myDeque[i]);
        }
    }
    return 0;
}

int printSolution(int N)
{
    std::cout<<(N*(N+1)*(2*N+1))/6;
    return 0;
}
