#include <iomanip>
#include <iostream> 
using namespace std;


int main() 

{

	
        double numb0;
	double numb1;
	double numb2;
	double numb3;
	double numb4;

	cout<<"Enter a number between 0 and 10: ";
	cin>>numb0;

	numb1=1*numb0;
	numb2=2*numb0;
	numb3=3*numb0;
	numb4=4*numb0;	



	cout<<"+--------+------+"<<endl;
	cout<<"|multiple|number|"<<endl;
	cout<<"+--------+------+"<<endl;
	cout<<"|  1     |"<<fixed<<setprecision(4)<<setw(6)<<numb1<<"|"<<endl;
	cout<<"|  2     |"<<fixed<<setprecision(3)<<setw(6)<<numb2<<"|"<<endl;
	cout<<"|  3     |"<<fixed<<setprecision(2)<<setw(6)<<numb3<<"|"<<endl;
	cout<<"|  4     |"<<fixed<<setprecision(1)<<setw(6)<<numb4<<"|"<<endl; 
	cout<<"+--------+------+"<<endl;


	return 0;
}
