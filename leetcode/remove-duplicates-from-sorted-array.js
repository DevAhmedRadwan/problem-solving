/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    if (nums.length == 1) return 1;
    let final_arr_index = 0;
    nums.forEach((num,index) => {
        if (index > 0 && nums[final_arr_index] != num) {
            final_arr_index++;
            nums[final_arr_index] = num;
        }
    })
    return final_arr_index+1
};
