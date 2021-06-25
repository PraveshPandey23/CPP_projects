#include <iostream>
using namespace std;

int main() {    
    int num;

    cout<< "check whether the entered num is positive, negative or zero."<<endl;
    cout << "Enter an integer: ";
    cin >> num;

    // main if
    if (num != 0) {
        
        if (num>0){
            cout<<" Num is positive." <<endl;
        }else {
            cout<<" Num is negative." <<endl;
        }  
    }
    // main else
    else {
        cout << " number is Zero" << endl;
    }
    return 0;
}