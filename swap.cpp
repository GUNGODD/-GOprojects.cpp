#include <iostream>
using namespace std;
int main (){
    float num1 , num2 , temp;
    cout << "Enter two numbers:";
    cin >> num1 >> num2;
    
    //display numbers before swaping 
    cout << "before swap ," << endl;
    cout << "num1 = "<< num1 << endl;
    cout << "num2 =" << num2 << endl;



    // swap num1 and num2 
    temp = num1;
    num1 = num2;
    num2 = temp;
 
 //display numbers after swapping 
  cout << "\nAfter swap," <<endl;
  cout << "num1 = " << num2 << endl;
  cout << "num2 = " << num1 << endl;
  return 0;
}