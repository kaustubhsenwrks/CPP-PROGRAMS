#include <iostream>
#include <climits>
using namespace std;
int main() {
    int marks[] = {99,54,22,-15,74,-24};
    int size = 6;
    int smallest = INT_MAX;
    for (int i=0; i < size; i++) {
        if (marks[i] < smallest) {
            smallest = marks[i];
            
        }
    }
    cout<<"smallest is : "<<smallest;
}