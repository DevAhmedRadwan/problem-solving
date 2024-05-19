/**
 * @param {number} n
 * @return {number}
 */
var climbStairs = function (n) {
  const calc = [1, 1, 2];
  for (let i = 3; i <= n; i++) {
    calc.push(calc[i - 1] + calc[i - 2]);
  }
  return calc[n];
};
