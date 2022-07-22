//Dapo Otepola-Bello
//11-16-2020
#include<iostream>
#include<cmath>
using namespace std;


int main()
{

    int i,size;
    float variance=0;
    float mean,range,deviation,sum;
    int max,min;
    float*arr=NULL;

    cout << "Enter array size: ";
    cin>>size;
	
    arr=new float[i]; 

    cout<<"Enter "<<size<<" values: ";
  // cin>>arr[i];
   for(i = 0; i < size; i++)
   {
        cin >> arr[i];
	sum=sum+arr[i];
   }

 //  sum+=arr[i];
   mean=sum/size;

    cout<<"Mean: "<<mean<<endl;	

    max=arr[0];
    min=arr[0];
    for(i=1;i<size;i++)
    {
     if(arr[i]>max)
	    max=arr[i];
     if(arr[i]<min)
 	    min=arr[i];
    }     
    range=max-min;
    cout<<"range: "<<range<<endl;


	sum=0;

	for(i=0;i<size;i++)
	 variance+=pow(arr[i]-mean,2);
	variance=variance/size;
	deviation=sqrt(variance);
//	for(i=0;i<size;i++)

    cout<< "Standard Deviation: " << deviation<<endl;


    

    return 0;
}
