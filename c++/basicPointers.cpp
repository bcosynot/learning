#include<iostream>
using namespace std;

/**
 * This program is an attempt to get a handle
 * on pointers. The very basic and nothing fancy.
 * Baby steps, yo.*
 */
int main(){
  // Declare a variable.
  int a = 23;
  // Declare a pointer.
  int* pointerToA = &a;
  // Let's print both out and see the results.
  cout << endl << a << "-" << pointerToA << endl;
  // Dereference that thang!
  cout << *pointerToA << endl;
}
