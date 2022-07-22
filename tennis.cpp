//Dapo Otepola-Bello
//11-17-2020
#include <iostream>
using namespace std;
	
	
 
int main()
{



	int score0, score1;


	cout << "Enter score: ";
	cin >> score0 >> score1;
	cout << "Announcement: ";
	if(score0 == 3 && score1 == 3)cout << "deuce" << endl;
	else
	{
		switch(score0)
		{
		case 0:
		       cout << "love ";
		       break;
		case 1:
		       cout << "fifteen ";
		       break;
		case 2:
		       cout << "thirty ";
		       break;
		case 3:
		       cout << "forty ";
		       break;
		default:
			cout << "invalid ";
		       break;
		}
		if(score0 == score1)
			cout << "all" << endl;
		else
		{
			switch(score1)                  
			{                             
			case 0:                                  
			cout << "love" << endl;                                 				break;                           
			case 1: 
		       	cout << "fifteen " << endl;                                  				 break;                       
		        case 2:                                   
		       	cout << "thirty " << endl;                                 				 break;                            
			case 3:                                  
		       	cout << "forty " << endl;                                				break;                         
			default:                                 
		cout << "invalid " << endl;                                      				break;
                  }}}
	return 0;
}


