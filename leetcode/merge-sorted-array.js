/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */
var merge = function (nums1, m, nums2, n) {
  let i = m - 1,
    j = n - 1;
  for (let k = n + m - 1; k >= 0; k--) {
    if (j < 0 || (j >= 0 && nums1[i] >= nums2[j])) {
      nums1[k] = nums1[i];
      i--;
      continue;
    }
    nums1[k] = nums2[j];
    j--;
  }
  return nums1;
};
