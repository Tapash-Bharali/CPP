//  Take 3 numbers input and tell if they can be the sides of a triangle

#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Enter the three sides : ";
    cin>>a>>b>>c;
    if((a + b )> c and (b + c) > a and (c + a) > b)
    {
        cout<<"Valid Triangle";
    }
    else 
    {
        cout<<"Invalid Traingle";
    }
    return 0;

}