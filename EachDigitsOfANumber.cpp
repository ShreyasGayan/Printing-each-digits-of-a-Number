#include <iostream>
using namespace std;

int main() {
    int numb = 12345;

    while (numb > 0) {
        int digit = numb % 10;
        cout << digit << endl;
        numb /= 10;
    }
    return 0;
}