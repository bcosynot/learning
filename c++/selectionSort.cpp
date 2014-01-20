#include<iostream>
using namespace std;

void sort(int array[], int arraySize);

/**
 * Program to perform selection sort
 * on an array of fixed size.
 */
int main()
{
  // Declare the array. Let's use an array of size 5.
  // We will be using input from user, so input size
  // will be kept small.
  int a[5];

  // Get input from user.
  for(int i = 0; i < 5; i++) {
    cout << "Enter value " << (i + 1) << ":";
    cin >> a[i];
  }

  // Get pointer to array.
  //int* pointer = a;
  // Sort the array.
  sort(a,5);

  cout << "Sorted array:\n";
  // Print the array.
  for(int i = 0; i < 5; i++){
    cout << a[i] << endl;
  }
}

/**
 * Method to sort an array using selection sort.
 *
 * @param array The array to be sorted.
 * @param arraySize The size of the array being passed.
 *
 * @return The sorted array
 */
void sort(int array[], int arraySize){

  for(int i = 0; i < arraySize; i++){
    // Find the smallnest array and put it
    // at the current index.
    int smallest = array[i];
    int smallestIndex = i;
    // Find the smallest element.
    for(int j = i; j < arraySize; j++){

      if(array[j] < smallest){
	smallest = array[j];
	smallestIndex = j;
      }
    }
    // Swap the smallest element with the
    // current index.
    int temp = array[smallestIndex];
    array[smallestIndex] = array[i];
    array[i] = temp;
  }
}
