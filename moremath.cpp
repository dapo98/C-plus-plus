/*Dapo Otepola-Bello
 11-12-2-20*/
#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	double num0, num1, num2, num3,sum, sum1;
double log_xy(double x, double y);
double x,y;
	int result, a;

cout<<"Enter two numbers: ";
cin>>x>>y;
sum=log(y)/log(x); 

sum1=sqrt(y);
//sum1=pow(y,1)/x;

cout<<"log base "<<x<<" of "<<y<<" is "<<sum<<endl<<"root "<<x <<" of "<<y <<" is "<<sum1<<endl;




	return 0;
}
