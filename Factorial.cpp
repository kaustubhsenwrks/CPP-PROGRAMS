#include <iostream>
using namespace std;
int factorial(int n) {
    int mult = 1;
    for (int i=1; i<=n; i++) {
        mult = mult*i;
    }
    return mult;
}
int main() {
    cout<<factorial(5);
    return 0;
}
