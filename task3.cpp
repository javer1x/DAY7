#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any integer"<<endl;
    cin>>num;
    if(num>=10&&num<=20){
        cout<<"Entered interger is Within range"<<endl;
    }
    else{
        cout<<"Entered integer is Out of range"<<endl;
    }
}