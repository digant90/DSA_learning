#include <iostream>
#include <vector>

using namespace std;

bool is_palindrome_recursive(vector<int> &arr, int i, int size) {
    if(i >= size-i)
        return true;

    if(arr[i] != arr[size-i])
        return false;

    return is_palindrome_recursive(arr, i+1, size);
}

int main() {
    vector<int> arr{1,2,3,5,1};
    cout<<is_palindrome_recursive(arr,0,arr.size()-1)<<"\n";
    return 0;
}
