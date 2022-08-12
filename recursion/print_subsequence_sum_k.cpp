#include <iostream>
#include <vector>

using namespace std;

// It will print only first successful array
bool recursive1(int i, int n, vector<int> &nums, vector<int> &arr, int sum, int j) {
    if(i >= n) {
        if(j == sum) {
            cout<<"Subsequence is: "; 
            for(auto &x : arr) {
                cout<<x<<" ";
            }
            cout<<"\n";
            return true;
        }
        return false;
    }

    j = j + nums[i];
    arr.push_back(nums[i]);
    bool b1 = recursive1(i+1, n, nums, arr, sum, j);

    if(b1 == true)
        return true;
    j = j - nums[i];
    arr.pop_back();

    bool b2 = recursive1(i+1, n, nums, arr, sum, j);

    return b2;
}


void recursive(int i, int n, vector<int> &nums, vector<int> &arr, int sum, int j) {
    if(i >= n) {
        if(j == sum) {
            cout<<"Subsequence is: "; 
            for(auto &x : arr) {
                cout<<x<<" ";
            }
            cout<<"\n";
        }
        return;
    }

    j = j + nums[i];
    arr.push_back(nums[i]);
    recursive(i+1, n, nums, arr, sum, j);
    j = j - nums[i];
    arr.pop_back();
    recursive(i+1, n, nums, arr, sum, j);
}

int main() {
    vector<int> nums{1,2,1};
    vector<int> arr;
    int n = nums.size();
    int sum = 2;
    recursive1(0, n, nums, arr, sum, 0);
    return 0;
}
