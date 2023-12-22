#include <iostream>
using namespace std;

// Program to create Tic Tac Toe game

void display(char mt[3][3]){
   
    cout<<"\n";
    cout<<" ______________\n";
    cout<<"|    |    |    |"<<endl;
    cout<<"|"<<mt[0][0]<<"___|"<<mt[0][1]<<"___|"<<mt[0][2]<<"___|\n";
    cout<<"|    |    |    |"<<endl;
    cout<<"|"<<mt[1][0]<<"___|"<<mt[1][1]<<"___|"<<mt[1][2]<<"___|"<<endl;
    cout<<"|    |    |    |"<<endl;
    cout<<"|"<<mt[2][0]<<"___|"<<mt[2][1]<<"___|"<<mt[2][2]<<"___|"<<endl;
    
}

int main()
{  cout<<"\n-------------------------------------------------------------------------------------\n";
   cout<<"                                  Tic Tac Toe Game                                        \n";
  cout<<"\n-------------------------------------------------------------------------------------\n";
//    char mt[3][3];
   char mt[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    display(mt);
    int isFull;
    do{
    char c;
    int row,col;
    cout<<" \nselect a character (X/O) Enter in capital letter: ";
    cin>>c;
    cout<<"Position to place the character (Enter the index of matrix) : ";
    cin>>row>>col;
    if(mt[row][col]!='X' && mt[row][col]!='O')
    {
        mt[row][col]=c;
        display(mt);
    }
    else{
        cout<<"\nplace is already occupied do again\n";
    }
   
       if((mt[row][0]==mt[row][1] && mt[row][0]==mt[row][2])&&(mt[row][0]!=' ') || (mt[0][col]==mt[1][col] && mt[0][col]==mt[2][col])&&(mt[row][0]!=' ') || (mt[0][0]==mt[1][1] && mt[1][1]==mt[2][2])&&(mt[0][0]!=' ') || (mt[0][2]==mt[1][1] && mt[1][1]==mt[2][0])&&(mt[1][1]!=' '))
       {
        cout<<"\n********* "<<c<<" won the game *********\n ";
        break;
       }
       
    isFull=1;
    for (int i = 0; i <3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
        if(mt[i][j]!='X' && mt[i][j]!='O')
        isFull=0;
       
    }
    }
    
    }while(isFull==0);
    if(isFull==1)
    {
        cout<<"Game Draw";
    }
    return 0;
}