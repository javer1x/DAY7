#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter any integer"<<endl;
    cin>>num;
    if(num>0){
        cout<<"Entered number is Positive"<<endl;
    }
    else if(num<0){
        cout<<"Entered number is Negative"<<endl;
    }
    else {
        cout<<"Entered number is Zero"<<endl;
    }
    return 0;
}