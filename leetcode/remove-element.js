/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function(nums, val) {
    let final_arr_index = 0;
    nums.forEach((num) => {
        if (num != val) {
            nums[final_arr_index] = num;
            final_arr_index++;
        }
    })
    return final_arr_index + 1;
};
