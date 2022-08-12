#include <iostream>
#include <vector>

using namespace std;

void print_subsequence(int index, int n, vector<int> &arr, vector<int> &result) {

    if(index >= n) {
        cout<<"Subsequence is: ";
        for(auto &x : result) {
            cout<<x<<" ";
        }
        cout<<"\n";

        return;
    }

    result.push_back(arr[index]);
    print_subsequence(index+1, n, arr, result);
    result.pop_back();
    print_subsequence(index+1, n, arr, result);
}

int main() {

    vector<int> arr{3,1,2};
    int n = arr.size();
    vector<int> result;
    print_subsequence(0, n, arr,result);
    return 0; 
}
