var binarySearch = function (nums, target, startIndex, endIndex) {
  if (startIndex >= nums.length) {
    return nums[nums.length - 1] < target ? nums.length : nums.length - 1;
  }
  if (endIndex < 0) {
    return 0;
  }
  if (startIndex > endIndex) {
    if (nums[startIndex] < target) {
      return startIndex;
    }
    return endIndex + 1;
  }
  const midIndex = Math.ceil(startIndex + (endIndex - startIndex) / 2);
  if (nums[midIndex] == target) {
    return midIndex;
  }
  if (nums[midIndex] > target) {
    return binarySearch(nums, target, startIndex, midIndex - 1);
  }
  return binarySearch(nums, target, midIndex + 1, endIndex);
};

/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var searchInsert = function (nums, target) {
  return binarySearch(nums, target, 0, nums.length);
};
