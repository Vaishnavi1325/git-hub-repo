//question 1
#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}

//question 2
#include <iostream>
using namespace std;

int main() {
    int N;
    long long factorial = 1;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        factorial *= i;
    }
    cout << factorial << endl;
    return 0;
}

//question 3
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= 10; i++) {
        cout << N << " * " << i << " = " << N * i << endl;
    }
    return 0;
}

