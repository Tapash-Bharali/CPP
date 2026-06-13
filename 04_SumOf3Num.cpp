#include<iostream>
using namespace std;

int sum(int a, int b, int c ){
    int result = a + b + c;
    return result;
}
int main(){
    int p,q,r;
    cout<<"Enter numbers : ";
    cin>>p>>q>>r;
    cout<<"The sum is : "<<(p+q+r)<<endl;

}