#include <iostream>
using namespace std;
int main () {
int a, b, c;
cout << "enter the first numnber" << endl;
 cin >> a;
cout << "enter the secoond number" << endl;
cin >> b;
cout <<  "enter the Third number " << endl;
cin >> c;
if ( a > b && a > c){
cout  <<a  << endl<< "is Greater Number" << endl;
} else if (b > a && b > c){
cout << b << endl <<" is Greater Number" << endl;
}
else {
cout << c << endl<< "is Greater Number " << endl;
return 0;
}
    }