#include<iostream>
#include<cstdlib>
#include<string>
#include<sstream>
using namespace std;
//int contains(string);
int toint(string);
string tostring(int);
int contains(string s);
int main()
{
    int i,T,store=0,j;
    cin>>T;
    string arr[T][3];
    char op;
    long numa=0,numb=0,numc=0,ans=0;
    for(i=0;i<T;++i)
    {
        cin>>arr[i][0];
        cin>>op;
        cin>>arr[i][1];
        cin>>op;
        cin>>arr[i][2];
    }
    for(i=0;i<T;++i)
    {
        numa=0;numb=0;numc=0;
        if(i!=0) cout<<endl;
        for(j=0;j<3;++j){
            if(contains(arr[i][j]))
            {
                store = j;
                continue;
            }
            else if(!contains(arr[i][j]))
            {
                if(j==0)
                    numa=toint(arr[i][0])*-1;
                else if(j==1)
                    numb = toint(arr[i][1])*-1;
                else if(j==2)
                    numc = toint(arr[i][2]);
            }
        }
        ans = numb+numa+numc;
        ans = ans<0?ans*-1:ans;
        arr[i][store]=tostring(ans);
        cout<<arr[i][0]<<" "<<"+"<<" "<<arr[i][1]<<" "<<"="<<" "<<arr[i][2];
    }
    return 0;
}

int toint(string s)
{
    int var=0;
    stringstream(s)>>var;
    return var;
}
string tostring(int n)
{
    stringstream ss;
    ss<<n;
    return ss.str();

}
int contains(string s)
{
    int val=0;
    for(int i=0;i<s.length();++i)
    {
        if(s[i]=='m')
            {
                val= 1;
                break;
            }
        else
            val=0;

    }
    return val;
}
