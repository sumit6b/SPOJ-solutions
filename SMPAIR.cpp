#include<iostream>
using namespace std;
int main()
{
    int T,N;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int mina,minb,temp;
        cin>>N;
        int arr[N];
        for(int j=0;j<N;++j)
        {
            cin>>arr[j];
        }
        if(arr[0]>arr[1])
        {
            mina=arr[0];
            minb=arr[1];
        }
        else
        {
            minb=arr[0];
            mina=arr[1];
        }
        for(int j=2;j<N;++j)
        {
            if(arr[j]<mina)
            {
                if(arr[j]<minb)
                {
                    temp=minb;
                    minb=arr[j];
                    mina=temp;
                }
                else
                    mina=arr[j];
            }
        }
        cout<<mina+minb<<endl;
    }

}
