/*2 Sum
Given an array of integers, find two numbers such that they add up to a specific target number.

The function twoSum should return indices of the two numbers such that they add up to the target, where index1 < index2. Please note that your returned answers (both index1 and index2 ) are not zero-based. Put both these numbers in order in an array and return the array from your function ( Looking at the function signature will make things clearer ). Note that, if no pair exists, return empty list.

If multiple solutions exist, output the one where index2 is minimum. If there are multiple solutions with the minimum index2, choose the one with minimum index1 out of them.
*/

vector<int> Solution::twoSum(const vector<int> &A, int B) {
    int n = A.size();
    vector<int> v;
    if (n < 2) {
        return v;
    }
    unordered_map<int, int> seen;
    seen.reserve(A.size());
    for (int i = 0; i < A.size(); ++i) {
        long long target = B - A[i];
        if (target < INT_MIN || target > INT_MAX) continue;
        auto it = seen.find(target);
        if (it != seen.end())
            return vector<int>{ it->second + 1, i + 1 };
        seen.insert(make_pair(A[i], i));
    }
    return vector<int>{};
}
