// Take positive integer input and tell if it is even or odd
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num % 2 == 0) {
        cout<<"Even";
    }
    else
    cout<<"Odd";
}