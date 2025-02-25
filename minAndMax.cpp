/**
 * @file minAndMax.cpp
 * @number
 * @author Marc Joel B. Deus
 * @brief  Gets the minimum and Maximum element of the array size of N 
 *        ""Given an array of N integers (1 ≤ N ≤ 100), find and print the maximum and minimum values"""
 **/

#include <iostream>
#include <algorithm> // Another vaiable solution (abstracts away the logic of finding the max and min)

using namespace std;

int get_max(int arr[], int n);
int get_min(int arr[], int n);

int main() {

    // variable declarations
    int n, min, max;

    // makes sure that the number is between 1 and 100
    do {
        cout << "Enter the number of elements: ";
        cin >> n;
    } while ( n < 1|| n > 100);

    // initializes a vector of n elements
    int arr[n];

    for(int i = 0; i < n; i++) {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> arr[i];
    }


    max = *max_element(arr, arr + n); // another option
    min = *min_element(arr, arr + n); // another option

    // max = get_max(arr, n);
    // min = get_min(arr, n);
    
    cout << endl << "=======================" << endl;
    cout << "The maximum element is: " << max << endl;
    cout << "The minimum element is: " << min << endl;
    cout << "=======================" << endl << endl;

}

int get_max(int arr[], int n) {
    int max = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    
    return max;
}

int get_min(int arr[], int n) {
    int min = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}