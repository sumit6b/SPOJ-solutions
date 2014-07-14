#include<iostream>
using namespace std;
int printSolution(int);
int main()
{
    int T,i;
    cin>>T;
    int arr[T];
    for(i=0;i<T;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<T;++i)
    {
        if(i==0)
            printSolution(arr[i]);
        else
        {
            cout<<endl;printSolution(arr[i]);
        }
    }
    return 0;
}
int printSolution(int N)
{
    int arr[200],m=1,c=0,ans,j,i,n;
    arr[0]=1;
    for(i=2;i<=N;++i)
    {
        for(j=0;j<m;++j)
        {
            ans = i*arr[j]+c;
            c = ans/10;
            arr[j]=ans%10;

        }

        if(c!=0)
        {
            while(c>0)
            {
                n=c%10;
                arr[m]=n;
                m++;
                c=c/10;
            }
        }


    }
    //cout<<"**********"<<endl;
    for(i=m-1;i>=0;i--)
        cout<<arr[i];


}
