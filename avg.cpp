#include <iostream>

#include<bits/stdc++.h>

using namespace std;


int main() {
 
  int n; 
  
  cout << "Please enter total number of observations " << endl; 
  cin >> n;


  int * v = new int[n]; 

  cout << "Enter " << n << " numbers" << endl;

  for (int i = 0; i < n; i++)
    cin >> v[i];

  cout << endl;

  float sum = 0;
  float average = 0;

 
  for (int i = 0; i < n; i++)
    sum += v[i]; 

  cout << "sum = " << sum << endl;
  average = (float)(sum / n); 
  cout << "Average = " << average << endl;

  return 0;
}
