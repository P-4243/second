/*First 10 lines contains snake and ladder board where each line has 10 tokens separated by a space. The tokens can either be integers, Start, End, S(number), L(number) where

Integer denotes the square number
Start denotes the left bottom position on the board from where player start the game
End denotes the left top position on the board
S(number) denotes that the current square has a snake that will take you down to a square number mentioned in the parenthesis.
L(number) denotes that the current square has a ladder that will take you up to a square number mentioned in the parenthesis.
Second line contains die_inputs separated by a space.
Output :
Find if the player is possible to reach the End or not, based on die_inputs and the board. If it is possible, display ‘Possible’ with number of snakes and ladders encountered during his/her play else display ‘Not possible’ along with number of snakes, number of ladders and the square where the player’s coin has ended at.
Print all the outputs delimited by a space.
Refer Examples section for better understanding.*/

#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int i=0,j,shift,val=0,k=0,count=9,read,x;

    vector<int>die;
     map<int,int>snake;
      map<int,int>ladder;
      vector<vector<string>>v(3,vector<string>(3));
    vector<vector<int>>board(3,vector<int>(3));
      cout<<"enter no of die readings";
      cin>>read;
      cout<<"enter die readings";
    for(i=0;i<read;i++)
    {
        cin>>x;
die.push_back(x);
    }

    cout<<"enter board from 9(End) to 1(Start) -- case sensitive";
    for(i=0;i<3;++i)
    {
        for(j=0;j<3;++j)
        {
            cin>>v[i][j];

    string cell=v[i][j];
    if(cell[0]=='S' && cell[1]=='t')
    {
       (board[2][2]=1);
    }
    else if(cell[0]=='E' && cell[1]=='n')
    {
       (board[0][0]=9);
    }
   else if(cell[0]=='L')
    {shift=stoi(cell.substr(2,cell.size()-2));
        board[i][j]=--count;

        ladder[count]=shift;

    }
     else if(cell[0]=='S')
    {
        shift=stoi(cell.substr(2,cell.size()-2));
        board[i][j]=--count;

        snake[count]=shift;
    }
    else
    {
        board[i][j]=--count;
    }
    }
    }


                while(k<read)
             {

                    val+=die[k];


                if(snake.find(val)!=snake.end())
                {
                  val=snake[val];

                }
                else if(ladder.find(val)!=ladder.end())
                {
                  val=ladder[val];

                }

              k++;

            }



    if(val==9)
        cout<<"u r the win";
    else
        cout<<"lose";
return 0;}

