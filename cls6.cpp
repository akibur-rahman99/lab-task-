//this is  systemic header file 
#include<iostream>
// this is user intput header file 
#include"this.h"//user input header file e age same name e ekta file banate hobe
                // same name e file na thakle header file ta kaj korbe na 
                // so 1st e file create korbo then main function e user input header file call korbo
                // c++ reference website e header file dekha jabe
                 
                
using namespace std;

  int main()

 { int a=5,b=10;
    cout<< "operator in c++"<<endl;
    cout<<"following are the type of operators in c++"<< endl;
    //arethmatic operatior
    cout<<  "thee value of a+b is = "<<a+b << endl;
    cout<<  "thee value of a-b is = "<<a-b << endl  ;
    cout<<  "thee value of a*b is = "<<a*b << endl;
    cout<<  "thee value of a/b is = "<<a/b << endl;
      cout<<  "thee value of a%b is = "<<a%b <<endl;
      cout<<  "thee value of a++ is = "<<a++<<endl;
      cout << a << endl;
      cout<<  "thee value of a-- is = "<<a--<<endl;
      cout << a << endl;
      cout<<  "thee value of ++a is = "<<++a<<endl;
      cout << a << endl;
      cout<<  "thee value of --a is = "<<--a<<endl;
      cout << a << endl;
      cout<<  "thee value of --b is = "<<--b<<endl;
      cout<<  "thee value of b++ is = "<<b++<<endl;

    cout<<"this is hello world";

    //assignment operator   
     //>> used to assign values to variable 
    //int a=5 , b=10;
   // char d='d';


    // comparison operator 
cout<< "comparison operator "<< endl;
    cout<< "the value of a==b is "<< (a==b)<< endl;     // equal 
        cout<< "the value of a!=b is "<< (a!=b)<< endl;   // not
        cout<< "the value of a>b is "<< (a>b)<< endl;   //greater than
        cout<< "the value of a<b is "<< (a<b)<< endl;   //less than
        cout<< "the value of a<=b is "<< (a<=b)<< endl;
        cout<< "the value of a>=b is "<< (a>=b)<< endl;




        // logical operator 
        
        cout<< "logical operator"<< endl;
        cout<< "the value of this logical and operator is ((a==b)&&(a<b))is :"<< ((a==b)&&(a<b))<< endl;
        cout<< "the value of this logical and operator is ((a==b)||(a<b))is :"<< ((a==b)||(a<b))<< endl;
    
    
    //akib sakib 0123//
        return 0 ;
} 