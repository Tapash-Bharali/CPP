#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int product = 1;
    for(int i = 1l; i <= n; i++){
       product *= i;
    }
    cout<<product;
}