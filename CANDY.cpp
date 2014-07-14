#include<iostream>
#include<deque>

using namespace std;
int printSolution(int,int[]);
int main()
{
    int k=0,n,i;
    deque<int> intDeque;
    deque<int*> ptrDeque;
    while(1)
    {
        cin>>n;
        if(n==-1)break;
        intDeque.push_back(n);
        int *arr = new int[n];
        for(i=0;i<n;++i)
        {
            cin>>arr[i];
        }
        ptrDeque.push_back(arr);
        k++;
    }

    for(i=0;i<k;++i)
    {
        if(i==0)
            printSolution(intDeque[i],ptrDeque[i]);
        else
        {
            cout<<endl;
            printSolution(intDeque[i],ptrDeque[i]);
        }
    }
    return 0;
}
int printSolution(int n, int arr[])
{
    int i,sum=0,avg,ans=0,a;
    for(i=0;i<n;++i)
    {
        sum+=arr[i];
    }
    avg = sum/n;
    if(sum%n==0)
    {
        for(i=0;i<n;++i)
            if(arr[i]<avg) {a = avg-arr[i]; ans+=a;}
        cout<<ans;
    }
    else if(avg*n!=sum)
        cout<<-1;
    return 0;

}
