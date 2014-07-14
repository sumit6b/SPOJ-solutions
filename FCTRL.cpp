#include<iostream>
#include<cmath>
//using namespace std;

int printSolution(long);

int main()
{
    long T,i;
    std::cin>>T;
    long arr[T];
    for(i=0;i<T;++i)
    {
        std::cin>>arr[i];
    }
    for(i=0;i<T;++i)
    {
        if(i==0)
            printSolution(arr[i]);
        else
        {
            std::cout<<std::endl;
            printSolution(arr[i]);
        }
    }
    return 0;
}

int printSolution(long N)
{
    long solution=0,i=1,a;
    //cout<<pow(5,3);
    do
    {
        a = N/pow(5,i);
        solution += a;
        i++;
    }while(a>0);
    std::cout<<solution;
    return 0;
}

