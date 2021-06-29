
#include <iostream>
using namespace std;

struct student
{
    char Name[30];
    int Roll;
    char Address[30];
};

int main() 
{
    student s[3];
    int i,j;
    for ( i = 0; i <3; i++)
    { 
        cout<<"Enter information of the Student:"<<endl;
        cout<< "\nEnter name:"<<endl;
        cin>>s[i].Name;
        cout<<"\nEnter roll number:"<<endl;
        cin>>s[i].Roll;
        cout<<"\nEnter adress:"<<endl;
        cin>>s[i].Address;
    }
    cout<<"Informations of the Student:"<<endl;
    for ( j = 0; j <3; j++)
    {
        cout<<"\nName:"<<s[j].Name;
        cout<<"\nRoll:"<<s[j].Roll; 
        cout<<"\nADDRESH:"<<s[j].Address<<endl;
    }
    return 0;
}
