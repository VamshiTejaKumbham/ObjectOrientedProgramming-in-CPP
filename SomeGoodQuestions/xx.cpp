#include <iostream>

using namespace std;
int binary_search(int nums[], int low, int high, int target, bool find_first) {
  if (low > high) {
    return -1;
  }

  int mid = (low + high) / 2;

  if (nums[mid] == target) {
    if (find_first) {
      return mid;
    } else {
      return binary_search(nums, mid + 1, high, target, find_first);
    }
  } else if (nums[mid] < target) {
    return binary_search(nums, mid + 1, high, target, find_first);
  } else {
    return binary_search(nums, low, mid - 1, target, find_first);
  }
}

int count_occurrences(int nums[], int n, int target) {
  int first_occurrence = binary_search(nums, 0, n - 1, target, true);
  if (first_occurrence == -1) {
    return 0;
  }

  int last_occurrence= binary_search(nums, 0, n - 1, target, false);
  return last_occurrence - first_occurrence + 1;
}


int main() {
  int n;
  cin >> n;

  int nums[n];
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  int target;
  cin >> target;

  int count = count_occurrences(nums, n, target);

  cout << count << endl;

  return 0;
}
