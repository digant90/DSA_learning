#include <iostream>
#include <vector>
using namespace std;


void reverse_recursive(vector<int> &arr, int l, int h) {
    if(l >= h) {
        return;
    }

    swap(arr[l], arr[h]);
    reverse_recursive(arr, l+1, h-1);
}

void reverse_recursive_space_optimize(vector<int> &arr, int l) {
    if(l >= arr.size()-l-1) {
        return;
    }

    swap(arr[l], arr[arr.size()-1-l]);
    reverse_recursive_space_optimize(arr, l+1);
}

int main() {

    vector<int> arr{1,2,3,4,5,6};
    reverse_recursive_space_optimize(arr, 0);

    for(auto &x : arr) {
        cout<<x<<" ";
    }

    cout<<endl;
    return 0;
}
