//Dapo Otepola-Bello
//11-20-2020
#include <iostream>
#include <iomanip>
using namespace std;

//std::set<int> intersection(set<int>tag1, set<int>tag2);
//double jaccard_in(set<int>tag1, set<int>tag2);

//void intersect(int tag1[], int tag2[]);


void jaccard(string tag1, string tag2)
{
  int i;
  //if (tag1.compare(tag2) != 

  //cout << tag1.compare(tag2) << endl;
  int x = tag1.compare(tag2);
  //cout << "Compare: " << x << endl;
  
  /*  if (x == 0)
    cout << "Equal" << endl;
  else if (x < 0)
    cout << "String 1 is smaller" << endl;
  else
    cout << "String 1 is greater" << endl;
  */
  /*  for (int i = 0; i < tag1[i]; i++)
    {
    for (int j = 0; j < tag2[j]; j++)
      if (tag1[i] == tag2[i])
	cout << "Match" << endl;
      else
	cout << "No match" << endl;
	}*/
  /*  int count = 0;
  for(int i = 0; tag1.size(); ++i)
    {
      if (tag1[i] == tag2[0])
	count++;
    }
  // return count;
  //count == tag1.size() - 1;
  count = tag1.size() - 1;
  */
  int count;
  for (int i = 0; i < tag1.size(); ++i)
    {
      if (tag1[i] == tag2[i])
	count++;
      else
	break;
    }

  int tag3 = tag1.size() + tag2.size();
  
   //tag1.append(tag2);
  //cout << "Tag 1 + 2: " << tag3 << endl;
  float jaccardIndex = count / tag1.size() + tag2.size() - count;
  //float jaccardIndex = x / (sizeof(tag1) + sizeof(tag2)) - x; 
  //float jaccardIndex = x / tag3 - x;
  cout << fixed << setprecision(2) <<"Jaccard Index is " << jaccardIndex << endl;
}

int main()
{
  int i;
  string num1, num2;
  //int tag1[5] = {1, 2, 3, 4, 6};
  //int tag2[3] = {2, 4, 6};
  //string*tag1 = NULL;
  //string*tag2 = NULL;
  string str;
  string tag1;
  string tag2;
  int x;
  //float jaccardIndex = 0;
  int inter, un = 0;
  //int x = sizeof(tag1) / sizeof(tag1[0]);
  //int y = sizeof(tag2) / sizeof(tag2[0]);
    
  cout << "Number of tags in Item 1: ";
  //cin >> num1;
  getline(cin, num1);
  cout << "Enter tags: ";
  getline(cin, tag1);
  
  cout << "Number of tags in Item 2: ";
  getline(cin, num2);
  cout << "Enter tags: ";
  getline(cin, tag2);

  jaccard(tag1, tag2);
  
  //intersection of A and B
  //minus
  //union of A and B

  return 0;
}
