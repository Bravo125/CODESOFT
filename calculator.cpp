#include<iostream>
using namespace std;

float sum(float number1,float number2)
{
    return number1+number2;
}

float diff(float number1,float number2)
{
    return number1-number2;
}

float multiply(float number1,float number2)
{
    return number1*number2;
}

float division(float number1,float number2)
{
    return number1/number2;
}


int main()
{
     float number1,number2;
     char input;
    cout<<"---------------------------------------------------------------------------------------------------------------------------"<<endl;
     cout<<"-------------------------------------------    SIMPLE CALCULATOR     -----------------------------------------------------"<<endl;
     cout<<"--------------------------------------------------------------------------------------------------------------------------"<<endl;
     cout<<endl;
     cout<<"Enter the first number:"<<endl;
     cin>>number1;
     cout<<"Enter the second number:"<<endl;
     cin>>number2;
    cout<<"Enter '+' for Addition"<<endl;
    cout<<"Enter '-' for Difference"<<endl;
    cout<<"Enter '*' for Multiplication"<<endl;
    cout<<"Enter '/' for Division"<<endl;
    cout<<"Enter the input for calculation which you want:"<<endl;
    cin>>input;
    cout<<endl;
    switch(input)
    {

        case '+':
        cout<<"The Addition of  the two number is: "<<sum(number1,number2)<<endl;
        break;

        case '-':
        cout<<"The Difference of the two number is: "<<diff(number1,number2)<<endl;
        break;

        case '*':
        cout<<"The Multiplication of the two number is: "<<multiply(number1,number2)<<endl;
        break;

        case '/':
        cout<<"The division of the two number is: "<<division(number1,number2)<<endl;
        break;

        default:
        cout<<"Invalid !"<<endl;
        break;

    }

    return 0;
}