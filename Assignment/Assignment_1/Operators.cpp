#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    string number;

    int a,b;

            
             int c=0;                            

    cout<<"Enter two number:"<<endl;
    cin>>a>>b;
    c=a+b; 
    cout<<"a="<<a<< endl;
    cout<<"b="<<b<<endl;
    cout<<"1)The sum is:"<<c<<endl;
    
    
    if (a==b){                                    
        cout<<"2)a is equal to b."<<endl;
    }else{
        cout<<"2)a is not equal to b."<< endl;
    }


    if ((a!=0)&&(a>=b)){                          
        cout<<"3)a is greater than or equal to b."<<endl;  
    }else{  
        cout<<"3)a is less than or equal to b."<<endl;
    }

    
    cout<<"4)The bitwise AND(a&b)="<<(a&b)<<endl; 

    
    if (a>0){
        cout<<"5)a is positive."<<endl;
    }else{                                     
        cout<<"5)a is negative."<<endl;
    }

    
    number=(b>0)?"6)b is positive": "6)b is negative" ;

    cout<<number<<endl;                           

    return 0;
}