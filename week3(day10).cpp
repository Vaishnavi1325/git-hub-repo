//question 1
#include <iostream>
using namespace std;

int getMax(const int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {1, 5, 3, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Max value: " << getMax(arr, size) << endl;
    return 0;
}
//question 2
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(const string &str) {
    string filteredStr;
    for (char ch : str) {
        if (isalnum(ch)) {
            filteredStr += tolower(ch);
        }
    }
    
    string reversedStr = filteredStr;
    reverse(reversedStr.begin(), reversedStr.end());
    
    return filteredStr == reversedStr;
}

int main() {
    string str = "A man, a plan, a canal, Panama";
    if (isPalindrome(str)) {
        cout  << str<<  "is a palindrome" << endl;
    } else {
        cout <<  str <<"is not a palindrome" << endl;
    }
    return 0;
}
