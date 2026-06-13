#include<iostream>
using namespace std;

float product(float a, float b, float c){
    float result = a * b * c;
    return result;
}
int main(){
    float p, q, r;
    cout<<"Enter the numnbers: ";
    cin>>p>>q>>r;
    cout<<"The product is : "<<p*q*r;
}