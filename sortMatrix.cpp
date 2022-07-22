//Dapo Otepola-Bello
//11-30-2020
#include <iostream>
using namespace std;

int i, j, k, x;
int temp;
int row, col;
//int arr[row][col];

int main ()
{
  int row, col, x, min, temp, m, n;
  int arr[row][col], arr2[row][col];
  cout << "Enter number of rows and columns: ";
  cin >> row >> col;
  cout << "Matrix elements: " << endl;
  for (int i = 0; i < row; i++)
    {
      for (int j = 0; j < col; j++)
	{
	  cin >> arr[i][j];
	  arr2[i][j] = arr[i][j];
	}
    }

  cout << "Sorted matrix: " << endl;

  //rows
      
  for (int i = 0; i < row; i++)
    {
      //loop for col
      for (int j = 0; j < col; j++)
	{
	  //comparison and swapping
	  for (int k = j + 1; k < col; k++)
	    {
	      if (arr[i][j] < arr[i][k]) //if flipped, sort other way
		{
		  //swap
		  int x = arr[i][j];
		  arr[i][j] = arr[i][k];
		  arr[i][k] = x;
		}
	    }
	}
    }
  //print row update
  
  for (i = 0; i < row; i++)
    {
      for (j = 0; j < col; j++)
	{
	  cout << arr[i][j] << " ";
	  //cout << i*j << " ";
	  //cout << arr[row][col] << " ";
	}
      cout << endl;
    }
  
  arr2[i][j] = arr[i][j]; 

  //columns
    
   for (j = 0; j < col; ++j)
    {
      for (i = 0; i < row; ++i)
	{
	  for (k = i + 1; k < row; ++k)
	    {
	      if (arr2[i][j] < arr2[k][j])
		{
		  x = arr2[i][j];
		  arr2[i][j] = arr2[k][j];
		  arr2[k][j] = x;
		}
	    }
	}
    }
   /*
  //print col update

  for (i = 0; i < row; i++)
    {
      for (j = 0; j < col; j++)
	{
	  //cout << arr2[i][j] << " ";
	  cout << arr2[i][j] << " ";
	}
    }
    cout << endl;
   */
  //  cout << sortMatrix(arr[row][col], x) << endl;
  
 

  return 0;
}
