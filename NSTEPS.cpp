#include<iostream>
int printSolution(int,int);
using namespace std;
int main()
{
    int T,i;
    cin>>T;
    int arr[T][2];
    for(i=0;i<T;++i)
    {
        cin>>arr[i][0]>>arr[i][1];
    }
    for(i=0;i<T;++i)
    {
        if(i==0)
            printSolution(arr[i][0],arr[i][1]);
        else
        {
            cout<<endl;
            printSolution(arr[i][0],arr[i][1]);
        }
    }
    return 0;
}

int printSolution(int x, int y)
{
    if(x==y)
    {
        if(x%2!=0)
            cout<<x*2-1;
        else if(x%2==0)
            cout<<x*2;
    }
    else if(x==y+2)
    {
        if(x%2==0)
            cout<<2*x-2;
        else
            cout<<2*((x/2)*2)-2+1;
    }
    else
        cout<<"No Number";
    return 0;

}
