/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function (digits) {
  let carry = 1;
  let newValue = 0;
  for (let i = digits.length - 1; i >= 0; i--) {
    newValue = (carry + digits[i]) % 10;
    carry = parseInt((carry + digits[i]) / 10);
    digits[i] = newValue;
  }
  if (carry) {
    digits = [carry, ...digits];
  }
  return digits;
};
