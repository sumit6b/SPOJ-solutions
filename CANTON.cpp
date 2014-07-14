#include<iostream>
using namespace std;
int printSolution(long);
int main()
{
    int T;
    cin>>T;
    long arr[T],i;
    for(i=0;i<T;++i)
    {
        cin>>arr[i];
    }
    for(i=0;i<T;++i)
    {
        if(i==0)
            printSolution(arr[i]);
        else
        {
            cout<<endl;
            printSolution(arr[i]);
        }

    }
    return 0;
}
int printSolution(long n)
{
    long i,c,a;
    for(a=0,i=1;a<n;++i)
        a+=i;

    i--;
    a-=i;
    //cout<<i<<" "<<a<<endl;
    c=n-a;
    if(i%2==0)
        cout<<"TERM"<<" "<<n<<" "<<"IS"<<" "<<c<<"/"<<(i-c+1);
    else if(i%2!=0)
        cout<<"TERM"<<" "<<n<<" "<<"IS"<<" "<<(i-c+1)<<"/"<<c;
    return 0;
}
