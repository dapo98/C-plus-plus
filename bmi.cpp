//Dapo Otepola-Bello
//9-13-2020
#include <iostream>
using namespace std;


int main()
{
	int fee;
	int in;	
	
	double hei0;
	double hei1;
	double ans0;
	double ans1;
	double wei0;

	const double con0=3.2808;
	const double con1=39.37;	
	const double con2=2.205;
	

	cout<<"Enter height (ft. in.): ";
	cin>>fee>>in;
	hei0=fee/con0;
       hei1= in/con1;	
       ans0=hei0+hei1;

       cout<<"Enter a weight ";
       cin>>wei0;
       ans1=wei0/con2;
	
	cout<< "Height is " <<ans0; 
	cout<<"m. ""Weight is " << ans1;
	cout<<"kg."<<endl;

	double bmi;
	bmi=ans1/(ans0*ans0);
	cout<<"The BMI is  "<<bmi<<endl;
	
		

	return 0;
}

