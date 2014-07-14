#include<iostream>
#include<deque>
using namespace std;
int printSolution(int,int,int);
int main()
{
    int k=0,i;
    deque<int*> ptrDeque;
    while(1)
    {
        int *arr =  new int[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        if(arr[0]==0&&arr[1]==0&&arr[2]==0)break;
        ptrDeque.push_back(arr);k++;
    }
    for(i=0;i<k;++i)
    {
        if(i==0)
            printSolution(ptrDeque[i][0],ptrDeque[i][1],ptrDeque[i][2]);
        else
        {
            cout<<endl;
            printSolution(ptrDeque[i][0],ptrDeque[i][1],ptrDeque[i][2]);
        }
    }
    return 0;
}
int printSolution(int a,int b, int c)
{
    //cout<<a<<" "<<b<<" "<<c<<endl;
    char p;
    p = (b-a == c-b)?'A':'G';
    if(p=='A')
        cout<<"AP"<<" "<<c+c-b;
    else
        cout<<"GP"<<" "<<c*(c/b);

    return 0;
}
