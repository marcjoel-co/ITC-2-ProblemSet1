/**
 * @file mergeTwoSortedArr.cpp
 * @author Marc Joel B. Deus
 * @brief  Merges two sorted array
 */


#include <iostream>
#include <algorithm>

using namespace std;

// function prototype each doing a certain task
void sortArray(int arr[], int number);
void printArray(int arr[], int number);
void mergeArray(int arr[], int n1, int arr2[],int n2, int arr3[]); 

int main () {

    // Declarations of counters for each array
    int n1, n2;

    // Request Input for array 1
    cout << "How big is the frist array: ";
    cin >> n1;

    int arr1[n1]; // Declaration of first array

    // For loop for requesting input of array 1
    for (int i = 0; i < n1; i++) {

        cout <<" Enter the number of" << i + 1 <<": ";
        cin >> arr1[i];
    }
    printArray(arr1, n1);

    // Declaration of array 2
    cout << "Enter the number of Array 2";
    cin >> n2;

    int arr2[n2]; // Declaration of array of 2


    // For loop requesting input for array 2
    for (int i = 0; i <n2; i++) {
        cout << " enter the number of " << i + 1 << ": ";
        cin >> arr2[i];
    }
    printArray(arr2, n2);
    cout << "\n";

    
    // Sort Each array


    // Declaration of array 3 
    int arr3[n1 + n2];


    // Merges array1 and 2
    mergeArray(arr1, n1, arr2, n2, arr3);
    sortArray(arr3, n1 + n2);

    // Prints the output to console
    printArray(arr3, n1 + n2);




}


void printArray(int arr[],int number) {

    for (int i = 0; i < number; i++) {
        cout << arr[i] << " ";
    }
    cout << " \n";
}

void sortArray(int arr[], int number) {
    // sort(arr, arr + number); // sort form the algorithms library ( abstracts away sorting logic)
    int temporary;


    // bubble sort (sorts by sending the biggest value to the right)
    for (int i = 0; i < number - 1; i++) {  // Inner: makes sure that it passes through enough

        for (int j = 0; j < number - i - 1; j++) {  // Outer: floats the bigger value to right
            if (arr[j] > arr[j + 1]) { // compares j to the next item... Run this if it is greater than the next
                temporary = arr[j];    
                arr[j] = arr[j + 1];
                arr[j + 1] = temporary; // swaps values
            }
        }
    }
}

void mergeArray(int arr[], int n1, int arr2[], int n2, int arr3[]) {

    // Copy all elements from first array to result array
    for (int i = 0; i < n1; i++) {
        arr3[i] = arr[i];
    }
    
    // Copy all elements from second array to result array
    for (int i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i];
    }
    
}