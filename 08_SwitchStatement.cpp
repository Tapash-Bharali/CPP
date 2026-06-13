#include<iostream>
using namespace std;
int main()
{
    int n1, n2;
    char op;
    cout<<"Enter the two numbers : ";
    cin>>n1>>op>>n2;
    switch(op)
    {
        case '+':
          cout<<n1+n2<<endl;
          break;
        case '-':
         cout<<n1-n2<<endl;
         break;
        case '*':
         cout<<n1*n2<<endl;
         break;
        case '/':
         cout<<n1/n2<<endl;
         break;
        default:
          cout<<"Invalid Operator"<<endl;

    }
}