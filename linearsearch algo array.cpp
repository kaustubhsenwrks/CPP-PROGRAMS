//Program of Linear search algorithm implmented using array data structure
#include <iostream>
using namespace std;
int linearsearch(int arr[], int sz, int target) {
    for (int i = 0; i<sz; i++) {
        if (arr[i] == target) {
            return i; //found
        }
    }
    return -1; //not found
}
int main() {
    int arr[] = {5,2,7,9,8,10,1};
    int sz = 7;
    int target = 8;
    cout<<linearsearch(arr, sz, target);
    return 0;
}
