#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 5, 1, 9, 3};
    int n = 5;

    int largest = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest)
            largest = arr[i];
    }

    cout << "Largest = " << largest;
}