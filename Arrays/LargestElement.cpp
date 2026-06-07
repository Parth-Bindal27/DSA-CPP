#include <iostream>
using namespace std;

int main(){
    int num1;
    cout << "Enter length of array: " << endl;
    cin >> num1;
    int arr[num1];
    cout << "Enter elements of array: " << endl;

    for (int i = 0; i < num1; i++) {
        cin >> arr[i];
    }
    
    int max = arr[0];
    for (int i = 1; i < num1; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Largest element in the array is: " << max << endl;

    return 0;
}
