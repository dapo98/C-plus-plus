//Dapo Otepola-Bello
//12-8-2020

#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
			
string file;
double*file_arr=NULL, s;
int size_of_file=0;
double arr[0];
//double*arr=NULL;
double active_file,half_size;
int i=0;
int j=0;
int k;
double mean=0;
double range=0;
double median=0;


void sumStats(double arr[], int size, double * mean, double * range, double * median)
{
	int index_sav;
	for(int i = 0; i < size; i++)
	{
		index_sav = i;
		for(int j = i+1; j < size; j++)
			if(arr[j] < arr[index_sav])
				index_sav = j;
		if(index_sav != i)
		{
			arr[i] += arr[index_sav];
			arr[index_sav] = arr[i] - arr[index_sav];
			arr[i] -= arr[index_sav];
		}	
	}
	double sum = 0;
	for(int i = 0; i < size; i++)
	{
		sum += arr[i];*mean = sum/size;
		if(size % 2 == 0)
			*median = (arr[size/2 - 1] + arr[size/2])/2;
		else
		{
			*median = arr[size/2];
			*range = arr[size-1] - arr[0];
		}

	}
}

int main()
{
	cout<<"Enter file name: ";
	getline(cin,file);

	ifstream active_file;

	active_file.open(file);

	if(active_file)
	{
		cout<<"Now reading "<< file << "..." << endl;
	}
	else
	{
		cout<<"Error reading "<< file;
	return 0;
	}
 	while(active_file >> s) 
	{
		size_of_file++; 
	} 
	
	file_arr= new double[size_of_file]; 

	active_file.close(); 
	active_file.open(file); 

	while(active_file >> s) 
	{ 
		file_arr[i] = s; 
		i++; 
	} 

	while(j<size_of_file) 
	{ 
		for(k=j+1; j<size_of_file; k++) 
		{ 
			if(file_arr[j] >= file_arr[k])
			{
				double temp = file_arr[k];
				file_arr[k] = file_arr[j];
				file_arr[j] = temp;
			}
		}
		j++;
	}
	sumStats(file_arr,size_of_file,&mean,&range,&median);
	cout << fixed <<setprecision(4);
	cout << "Mean: " << mean << endl;
	cout << "Median: " << median << endl;
	cout << "Range: " << range << endl;
}

/*
void sumStats(double arr[], int size, double * mean, double * range, double * median)
{
	int index_sav;
	for(int i = 0; i < size; i++)
	{
		index_sav = i;
		for(int j = i+1; j < size; j++)
			if(arr[j] < arr[index_sav])
	index_sav = j;
	if(index_sav != i)
	{
	arr[i] += arr[index_sav];
	arr[index_sav] = arr[i] - arr[index_sav];
	arr[i] -= arr[index_sav];
	}
	}
	double sum = 0;
	for(int i = 0; i < size; i++)
	sum += arr[i];*mean = sum/size;if(size % 2 == 0)*median = (arr[size/2 - 1] + arr[size/2])/2;
	else
	*median = arr[size/2];
	*range = arr[size-1] - arr[0];
}
*/

