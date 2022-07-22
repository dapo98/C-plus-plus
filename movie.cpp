2.//Dapo Otepola-Bello
//9-14-2020
#include <iostream>
using namespace std;
int main () 
{

	string rating;
//	string PG=9;
//	string PG13=13;
//	string R=17;
	
	
	int age0;
	//int age1;
	//int age2;
	//int age3;

		
		cout<<"Enter a movie rating: ";
		cin>>rating;
		cout<<"Enter age: ";
	       	cin>>age0;
			

		if (rating=="G"&&age0>=0) 
			
			cout<<"Suitable movie. Enjoy!"<<endl;
            	
		//else if
		//	cout<<"Unsuitable movie. Enjoy the review!"<<endl;
		

		else if (rating=="PG"&&age0>=9)
		
	
		cout<<"Suitable movie. Enjoy!"<<endl;
       
	 //   else if
	   // 	cout<<"Unsuitable movie. Enjoy the reviw!"<<endl;
	
	
		else  if (rating=="PG13"&&age0>=13)
		    cout<<"Suitable movie. Enjoy!"<<endl;

	    //else if
	//	    cout<<"Unsuitable movie. Enjoy the review!"<<endl;

		else if (rating=="R"&&age0>=17)
		    cout<<"Suitable movie. Enjoy!"<<endl;
 
	    else 
		    cout<<"Unsuitable movie. Enjoy the review!"<<endl;
		


	
	
	return 0;

}
