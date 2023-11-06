#include <iostream>
using namespace std;

void pairSum(int arr[], int size, int sum) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == sum) {
                cout << "Pair found at index " << i << " and " << j << " (" << arr[i] << " + " << arr[j] << ")" << endl;
            }
        }
    }
}

int main() {
    int arr[7] = {2, 4, 5, 6, 2, 1, 7};
    int sum;
    cin >> sum;
    pairSum(arr, 7, sum);
    return 0;
}
