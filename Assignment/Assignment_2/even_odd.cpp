#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter an integer: ";  
    cin >> num;    

    // main if
    if (num != 0) {
        
        if (num>0){

        
            if (num % 2 == 0) {
                cout << "number is even." << endl;
            }else {
                cout << "number is odd." << endl;
            }  
        }else {
            cout<<"Num is negative." <<endl;
        }  
    }
    // main else
    else {
        cout << "number is Zero" << endl;
    }
}