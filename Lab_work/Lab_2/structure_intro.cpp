#include <iostream>
using namespace std;

struct student
{
    char name[30];
    int roll;
    char address[30];
};

int main() 
{
    student s;
        cout << "Enter information," << endl;
        cout << "Enter name: ";
        cin>> s.name;
        cout << "Enter roll number: ";
        cin >> s.roll;
        cout << "Enter adress: ";
        cin >> s.address;

        cout << "\nDisplaying Information," << endl;
        cout << "Name: " << s.name << endl;
        cout << "Roll: " << s.roll << endl;
        cout << "address: " << s.address << endl;
    return 0;
}
