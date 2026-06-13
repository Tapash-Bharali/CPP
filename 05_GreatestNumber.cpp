// Take 3 positive integers input and print the greatest among them

#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Enter the three numbers : ";
    cin>>a>>b>>c;

    if(a > b  and a > c){
    cout<<"The greatest number is : "<<a;
    }

     else if(b > a and b > c) {
     cout<<"The greatest number is : "<<b;
     }

     else {
        cout<<"The greatest number is: "<<c;
     }
   }
