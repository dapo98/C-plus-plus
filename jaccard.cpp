//Dapo Otepola-Bello
//11-20-2020
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  int i, num1, num2;
  //int tag1, tag2;
  //string*tag1 = NULL;
  //string*tag2 = NULL;
  string str;
  string tag1, tag2;
  double jaccardIndex = 0;
  int inter, un = 0;

  cout << "Number of tags in Item 1: ";
  cin >> num1;
  cout << "Enter tags: ";
  //getline(cin, tag1);
  
  for (int i = 0; i < num1; i++)
    {
      //tag1 = new str[i];
      cin >> tag1[i];
    }
  cin.ignore();

  cout << "Number of tags in Item 2: ";
  cin >> num2;
  //cout << endl;
  //cin.ignore();
  cout << "Enter tags: ";
  // getline(cin, tag2);
 
  for (int i = 0; i < num2; i++)
    {
      cin >> tag2[i];
    }

  //intersection of A and B
  //minus
  //union of A and B

  for (int i = 0; i < tag1[i]; i++)
    {
      inter += (tag1[i] && tag2[i]);
      //un += (tag1[i] || tag2[i]);
    }
  for (int i = 0; i < tag2[i]; i++)
    {
      un += (tag1[i] || tag2[i]);
    }
  cout << "Intersection: " << inter << endl;
  cout << "Union: " << un << endl;

  jaccardIndex = (double)inter/un * 100.0;
  cout << "Jaccard Index is " << jaccardIndex << endl;
  
}
