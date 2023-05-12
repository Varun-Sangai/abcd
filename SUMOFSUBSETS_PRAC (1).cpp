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



int main() {
    vector<int> arr = {1, 2, 3};
    int sum = 0;
    int index = 0;
    cout << "Iterative Sum of Subsets: " << sumOfSubsets_I(arr) << endl;
   
    cout << "Recursive Sum of Subsets: " << sumOfSubsets_R(arr, index, sum) << endl;

     return 0;
   
}






