#include<iostream>
using namespace std;

int main()
{

  double n1, n2, n3, n4, n5; 
  double avg; // to store result

  cout << "Enter five numbers: ";
  cin >> n1 >> n2 >> n3 >> n4 >> n5;

  avg = (n1 + n2 + n3 + n4 + n5)/5;
  

  cout << "Average = " << avg << endl;

  return 0;
}
