//question 1
#include <iostream>
using namespace std;
int main() {
    int num = 10;
    int* ptr = &num;
    cout << "Value using the variable: " << num << endl;
    cout << "Value using the pointer: " << *ptr << endl;
    return 0;
}
//question 2
#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int* ptr = arr;
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    return 0;
}
//question 3
#include <iostream>
using namespace std;
int main() {
    int num = 42;
    int* ptr = &num;
    int** ptrToPtr = &ptr;
    cout << "Value using the variable: " << num <<endl;
    cout << "Value using the pointer: " << *ptr << endl;
    cout << "Value using the pointer to pointer: " << **ptrToPtr << endl;
    return 0;
}


