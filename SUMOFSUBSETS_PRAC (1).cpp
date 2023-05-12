#include <bits/stdc++.h>
using namespace std;

int sumOfSubsets_R(vector<int>& arr, int index, int sum) {
    if (index == arr.size()) {
        return sum;
    }
    int include = sumOfSubsets_R(arr, index + 1, sum + arr[index]);
    int exclude = sumOfSubsets_R(arr, index + 1, sum);
    return include + exclude;
}

int sumOfSubsets_I(vector<int>& arr) {
    int n = arr.size();
    int total = pow(2, n);
    int sum = 0;
    for (int i = 0; i < total; i++) {
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                sum += arr[j];
            }
        }
    }
    return sum;
}

int main() {
    vector<int> arr = {1, 2, 3};
    int sum = 0;
    int index = 0;
    cout << "Iterative Sum of Subsets: " << sumOfSubsets_I(arr) << endl;
   
    cout << "Recursive Sum of Subsets: " << sumOfSubsets_R(arr, index, sum) << endl;

     return 0;
   
}






