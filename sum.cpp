#include <iostream>
using namespace std;
int main(){
    int num, sum = 0;
      cout << "Enter five numbers: " << endl;
    for (int i = 0; i < 5; i++){
        cin >> num;
        sum = sum + num;
    }
     cout << "Sum of Five Numbers: " << sum << endl;
    return 0;
}
