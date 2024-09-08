//question 1
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    bool found = false;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
//question 2
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    int index = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            index = i + 1; // 1-based indexing
            break;
        }
    }

    cout << index << endl;

    return 0;
}
