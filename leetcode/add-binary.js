/**
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var addBinary = function (a, b) {
  let sum = "";
  let carry = 0;
  let current = 0;
  const maxlen = Math.max(a.length, b.length);
  const alen = a.length;
  const blen = b.length;
  for (let i = 0; i < maxlen; i++) {
    current = carry;
    current += a.length > i ? parseInt(a[alen - i - 1]) : 0;
    current += b.length > i ? parseInt(b[blen - i - 1]) : 0;
    carry = current > 1 ? 1 : 0;
    current %= 2;
    sum = sum.concat(current == 0 ? "0" : "1");
  }
  if (carry) {
    sum = sum.concat("1");
  }
  return sum.split("").reverse().join("");
};
