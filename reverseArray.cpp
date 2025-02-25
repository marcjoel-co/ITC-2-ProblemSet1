/**
 * @file reverseArray.cpp
 * @author Marc Joel B. Deus
 * @brief  Reversing an array in C++
 * 
 * @date 2025-02-24
 * 
 * 
 * 
 */

#include <iostream>

void normalArray(int arr[], int n);
void reverseArray(int arr[], int n); 

using namespace std;

int main() {

    int n = 0;
    
    cout << " Enter how many variables is in our array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter the value of the array: ";
        cin >> arr[i];
    }

    cout << "=====================" << endl;
    cout << "The normal array is: " << endl;
    normalArray(arr, n);
    cout << "reversed array: " << endl;
    reverseArray(arr, n);
    cout << "=====================" << endl;    

}

void normalArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
