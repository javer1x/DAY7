#include <iostream>
using namespace std;
int main() {
    int year;
    int modulus;
    cout<<"Enter any year"<<endl;
    cin>>year;
    modulus=year%4;
    cout<<modulus;
    if(modulus==0){
        cout<<"Entered year is a leap year"<<endl;
    }
    else {
        cout<<"Entered year is not a leap year"<<endl;
    }
}