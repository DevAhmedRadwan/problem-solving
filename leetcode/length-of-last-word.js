/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function (s) {
  let lastLength = 0;
  let foundSpace = false;
  for (let i = 0; i < s.length; i++) {
    if (s[i] == " ") {
      foundSpace = true;
    } else if (foundSpace) {
      foundSpace = false;
      lastLength = 1;
    } else {
      lastLength++;
    }
  }
  return lastLength;
};
