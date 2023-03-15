#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int nums[2];
    int n = sizeof(nums) / sizeof(nums[0]);

    cin >> nums[0] >> nums[1];

    sort(nums, nums + n);

    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";

    return 0;
}