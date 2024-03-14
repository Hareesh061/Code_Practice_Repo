string twoSum(int n, vector<int> &arr, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) return "YES";
        }
    }
    return "NO";
}


//optimized aproch

// string twoSum(int n, vector<int> &arr, int target) {
//     sort(arr.begin(), arr.end());
//     int left = 0, right = n - 1;
//     while (left < right) {
//         int sum = arr[left] + arr[right];
//         if (sum == target) {
//             return "YES";
//         }
//         else if (sum < target) left++;
//         else right--;
//     }
//     return "NO";
// }