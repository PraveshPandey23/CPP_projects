#include <iostream>
using namespace std;

int main() {    
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    if (num>0){
    cout << "Number is :" << num;  
    } 
    else if (num<=0)
    {
    cout<<"invalid input"<<endl;
}
    return 0;
}