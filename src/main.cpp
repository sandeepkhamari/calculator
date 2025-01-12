#include "calc.hpp"
#include "helper.hpp"

using namespace std;

int main()
{
    int opt, num1, num2;
    cout<<"Welcome to calculator app: Hope you have a great day!"<<endl;
    cout<<"Choose an operation:"<<endl;
    cout<<"1.Add 2.Sub 3.Mul 4.Div 5.pow 6.perc 7.sqrt"<<endl;
    cin>>opt;

    cout<<"Enter first number:"<<endl;
    cin>>num1;

    cout<<"Enter second number:"<<endl;
    cin>>num2;

    switch(opt)
    {
        case 1: cout<<add1(num1, num2)<<endl;
                break;
        
        case 2: cout<<sub1(num1, num2)<<endl;
                break;
        
        case 3: cout<<mul1(num1, num2)<<endl;
                break;

        case 4: cout<<div1(num1, num2)<<endl;
                break;

        case 5: cout<<pow1(num1, num2)<<endl;
                break;

        case 6: cout<<per1(num1, num2)<<endl;
                break;

        case 7: cout<<sqrt1(num1)<<endl;
                break;

        default: cout<<"Enter a valid option."<<endl;
                 break;
    }

    return 0;
}