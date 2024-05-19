/**
 * @param {number} x
 * @return {number}
 */
var mySqrt = function (x) {
  const limit = Math.ceil(x / 2) + 1;
  for (let i = 0; i <= limit; i++) {
    if (i * i == x) {
      return i;
    }
    if (i * i > x) {
      return i - 1;
    }
  }
};
