#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<< "Tell me your age ";
    cin >> age ;
   if(age <18){
        cout << "you cannot come to my party "<< endl;

    }
    else if (age ==18){
        cout<< "you are a kid and you will get kid pass "<< endl;
    
    }
    else {
        cout<< "you can enter the party "<< endl;
    }
//******************** switch case ************************* */
    switch (age)
    {
    case 18 :

        cout<< "your age is 18"<<endl;
        break;
    
        case 22:

        cout<< "your age is 22"<<endl;
        break;
    
        case 5 :

        cout<< "your age is 5"<<endl;
        break;
    
    default:
    cout<< "no special case"<< endl;
        break;
    }
    return 0;
}
