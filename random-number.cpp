#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    string Personname;
    char a;
    int inputuser,score=0;
    cout<<" Please Enter the name:"<<endl;
    getline(cin,Personname);
    cout<<"Welcome ! "<<Personname<<"  Lets play Guessing game.";
    cout<<endl;
    do
    {
       srand(0);
       int value = rand()%10+1;
        cout<<"Enter the number in between range 1 to 10:   ";
        cin>>inputuser;
        cout<<endl;
        if(inputuser==value)
        {
            cout<<"Congratulations! "<<endl;
            cout<<"Correct number guess by you. "<<endl;
            score++;
        }
        else
        {
            cout<<"You guess is Wrong ? Please try again.  "<<endl;
        }
        cout<<"If you would try again please enter Y/N.  "<<endl;
        cin>>a;
    } 
    while(a!='N');    
    cout<<"Your score is: "<<score<<endl;
    cout<<"Game End. "<<"Thanks for Playing."<<endl;
}
