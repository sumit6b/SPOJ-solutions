#include<iostream>
using namespace std;
int printSolution(int,int*,int*);
void sort(int*,int);
int main()
{
    int T,i,j,k,n;
    cin>>T;
    int arra[T],arrb[2*T][1000];
    for(i=0;i<T;++i)
    {
        cin>>n;
        arra[i]=n;
        for(j=2*i;j<2*i+2;++j)
        {
            for(k=0;k<n;++k)
            {
                cin>>arrb[j][k];
            }
        }
    }

    for(i=0;i<T;++i)
    {
        if(i==0) printSolution(arra[i], arrb[2*i],arrb[2*i+1]);
        else
        {
            cout<<endl;
            printSolution(arra[i], arrb[2*i],arrb[2*i+1]);
        }
    }
}

int printSolution(int n,int arra[],int arrb[])
{
    int arrans[n],i,s=0;
    sort(arra,n);
    sort(arrb,n);

    for(i=0;i<n;++i)
    {
        //cout<<"arra = "<<arra[i]<<"arrb = "<<arrb[i]<<endl;
        arrans[i]=arra[i]*arrb[i];

    }
    for(i=0;i<n;++i)
        s+=arrans[i];
    cout<<s;

}
void sort(int arr[],int n)
{
    int i,j,key;
    for(j=1;j<n;j++)
    {
        key = arr[j];
        i = j-1;
        while(i>=0&&arr[i]<key)
        {
            arr[i+1] = arr[i];
            i = i-1;
        }
        arr[i+1] = key;

    }
}
