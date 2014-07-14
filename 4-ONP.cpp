#include<iostream>
#include<stack>
#include<string>
using namespace std;
int priority(char op);
int isOperator(char op);
int generateRPN(string str);
int main()
{
    int t,i;
    string arr[100];
    cin>>t;
    for(i=0;i<t;++i)
    {
        cin>>arr[i];
    }
    for(i=0;i<t;++i)
    {
        generateRPN(arr[i]);
    }
}

int generateRPN(string str)
{
    int k=0,i;
    char ans[400];
    stack<char> myStack;
    //for(i=0;i<str.length();i++)cout<<str[i];
    for(i=0;i<str.length();++i)
    {
        if(str[i]=='(')
            {
                myStack.push('('); continue;
            }
        if(isOperator(str[i]))
        {
            if(isOperator(myStack.top()))
            {
                if(priority(myStack.top())>priority(str[i]))
                    {
                        ans[k++] = myStack.top();
                        myStack.pop();
                    }
                else
                    myStack.push(str[i]);
            }
            else
                myStack.push(str[i]);
            continue;
        }
        if(str[i]==')')
        {
            while(myStack.top()!='(')
            {
                ans[k++]=myStack.top();
                myStack.pop();
            }
            if(myStack.top()=='(') myStack.pop();
            continue;
        }
        ans[k++] = str[i];
    }

    while(!myStack.empty())
    {
        ans[k++] = myStack.top();
        myStack.pop();
    }
    for(i=0;i<k;++i)
    {
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}

int priority(char op)
{
    char operations[] = {'+','-','*','/','^'};
    int i;
    for(int i;i<5;++i)
    {
        if(op == operations[i])
            return i;
    }
}

int isOperator(char op)
{
    if(op=='+' || op=='-' || op=='*' || op=='/'||op=='^') return 1;
    else return 0;
}
