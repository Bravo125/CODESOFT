#include<iostream>
using namespace std;


#define OPPONENT_1;
#define OPPONENT_2;


int turn_of_player;
string moves[3]={"empty","cross","empty"};
string board[9]={"empty","empty","empty","empty","empty","empty","empty","empty","empty"};

void showboard()
{
    cout<<endl;
    for(int i=0;i<9;i++)
    {
        if(i==3 || i==6)
        {
            cout<<endl;
            cout<<endl;
        }
        if(board[i]=="empty")
        {
            cout<<"\t"<<" | ";
        }
        else
        {
            cout<<"\t"<<board[i]<<" ";
        }
    }
    cout<<endl;
}

bool Winner_of_game(string board[])
{
    if((board[0]!="empty")  &&  (board[0]==board[1])  &&  (board[1]==board[2]))
    {
        return true;
    }
    if((board[3]!="empty")  &&  (board[3]==board[4])  &&  (board[4]==board[5]))
    {
        return true;
    }
    if((board[6]!="empty")  &&  (board[6]==board[7])  &&  (board[7]==board[8]))
    {
        return true;
    }
    if((board[0]!="empty")  &&  (board[0]==board[3])  &&  (board[3]==board[6]))
    {
        return true;
    }
    if((board[1]!="empty")  &&  (board[1]==board[4])  &&  (board[4]==board[7]))
    {
        return true;
    }
    if((board[2]!="empty")  &&  (board[2]==board[5])  &&  (board[5]==board[8]))
    {
        return true;
    }
    if((board[0]!="empty")  &&  (board[0]==board[4])  &&  (board[4]==board[8]))
    {
        return true;
    }
    if((board[6]!="empty")  &&  (board[6]==board[4])  &&  (board[4]==board[2]))
    {
        return true;
    }
    return false;
}

void move(int turn_of_player)
{
    int count=0;
    int position,step;
    while((Winner_of_game(board)==false)  &&  (count!=9))
    {
        cout<<"Enter your position where you want to move:-"<<endl;
        cin>>position;
        position--;
        if(turn_of_player==OPPONENT_1)
        {

        }
    }
}























int main()
{

}