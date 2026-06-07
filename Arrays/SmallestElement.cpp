#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter length of array: " << endl;
    cin >> num;

    int arr[num];

    cout << "Enter elements of the array: " << endl;
    for (int i  = 0; i < num; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++) {
        for (int j = i + 1; j < num; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Smallest element in the array is: " << arr[0] << endl;

    return 0;
}