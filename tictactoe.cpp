//Dapo Otepola-Bello
//10-31-2020
#include<iostream> 
using namespace std;

char spot[10] = {'0','1','2','3','4','5','6','7','8','9'};

int gamestatus();

int main()
{
	int player = 1;
	int i; 
	int choice;
	char place;
   

    /*	cout<<"+---+---+---+"<<endl;
	cout<<"| 1 | 2 | 3 |"<<endl;
	cout<<"+---+---+---+"<<endl;
	cout<<"| 4 | 5 | 6 |"<<endl;
	cout<<"+---+---+---+"<<endl;
	cout<<"| 7 | 8 | 9 |"<<endl;
	cout<<"+---+---+---+"<<endl;*/
    do
    {
        
	cout<<"+---+---+---+"<<endl;
	cout<<"|"<<" " <<spot[1]<<" |"<<" "<<spot[2]<<" |"<<" "<<spot[3]<<" | "<<endl;
	cout<<"+---+---+---+"<<endl;
	cout<<"|"<<" "<<spot[4]<<"  |"<<" "<<spot[5]<<" |"<<" "<<spot[6]<<"|"<<endl;
	cout<<"+---+---+---+"<<endl;
	cout<<"|"<<" " <<spot[7]<<" |"<<" "<<spot[8]<<" |"<<" "<<spot[9]<<" |"<<endl;
	cout<<"+---+---+---+"<<endl; 

        player=(player%2)?1:2;

        cout<<"Place " <<player<<" at: "; 
	cin>>choice;


        place=(player == 1) ? 'x' : 'o';

        if (choice == 1 && spot[1] == '1')

            spot[1] = place;
        else if (choice == 2 && spot[2] == '2')

            spot[2] = place;
        else if (choice == 3 && spot[3] == '3')

            spot[3] = place;
        else if (choice == 4 && spot[4] == '4')

            spot[4] = place;
        else if (choice == 5 && spot[5] == '5')

            spot[5] = place;
        else if (choice == 6 && spot[6] == '6')

            spot[6] = place;
        else if (choice == 7 && spot[7] == '7')

            spot[7] = place;
        else if (choice == 8 && spot[8] == '8')

            spot[8] = place;
        else if (choice == 9 && spot[9] == '9')

            spot[9] = place;
	else if (choice >= 10)
	{
		cout << "Invalid input! 1-9 only." << endl;
		player--;
		cin.get();
	}
        else
        {
            cout<<"Invalid input! Position already filled."<<endl;

            player--;
         
            cin.get();
        }
      i=gamestatus();

      player++;
   }while(i==-1);

  if(i==1)
  //if (player == 3)
 	//cout << "Game Over - Draw" << endl;
  //else
    cout<<"Game Over "<<--player<<" wins!" << endl;


    else

     cout<<"Game Over- Draw"<<endl;
 
    return 0;
}
  
int gamestatus()
{
    if (spot[1] == spot[2] && spot[2] == spot[3])

	return 0;
    else if (spot[4] == spot[5] && spot[5] == spot[6])

	return 0;
    else if (spot[7] == spot[8] && spot[8] == spot[9])
	return 0;
    else if (spot[1] == spot[4] && spot[4] == spot[7])
	return 0;
    else if (spot[2] == spot[5] && spot[5] == spot[8])
	return 0;
    else if (spot[3] == spot[6] && spot[6] == spot[9])
	return 0;
    else if (spot[1] == spot[5] && spot[5] == spot[9])
	return 0;
    else if (spot[3] == spot[5] && spot[5] == spot[7])
	return 0;
    else if (spot[1] != '1' && spot[2] != '2' && spot[3] != '3'
                    && spot[4] != '4' && spot[5] != '5' && spot[6] != '6'
                  && spot[7] != '7' && spot[8] != '8' && spot[9] != '9')

       return 0;


    else
     
	  
	    return -1;
}




			

				
