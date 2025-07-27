#include <bits/stdc++.h>
using namespace std;

int binarySearchIterative(vector<int>& nums, int target) {
    int n = nums.size(); 
    int low = 0, high = n - 1;
    
    cout << "Iterative Binary Search:" << endl;
    while (low <= high) {
        int mid = (low + high) / 2;
        cout << "mid=" << mid << ", nums[mid]=" << nums[mid] << endl;
        
        if (nums[mid] == target) return mid;
        else if (target > nums[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}


int binarySearchRecursive(vector<int>& nums, int low, int high, int target) {
    if (low > high) return -1;
    
    int mid = (low + high) / 2;
    cout << "mid=" << mid << ", nums[mid]=" << nums[mid] << endl;
    
    if (nums[mid] == target) return mid;
    else if (target > nums[mid])
        return binarySearchRecursive(nums, mid + 1, high, target);
    return binarySearchRecursive(nums, low, mid - 1, target);
}

int searchRecursive(vector<int>& nums, int target) {
    cout << "Recursive Binary Search:" << endl;
    return binarySearchRecursive(nums, 0, nums.size() - 1, target);
}

int main() {
    vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 6;

    int ind1 = binarySearchIterative(a, target);
    if (ind1 == -1) cout << "Target not found (Iterative)" << endl;
    else cout << "Target found at index: " << ind1 << " (Iterative)" << endl;
    
    cout << endl;
    

    int ind2 = searchRecursive(a, target);
    if (ind2 == -1) cout << "Target not found (Recursive)" << endl;
    else cout << "Target found at index: " << ind2 << " (Recursive)" << endl;
    
    return 0;
}
