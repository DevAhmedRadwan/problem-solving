/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[]}
 */
var inorderTraversal = function (root) {
  if (root == null) {
    return [];
  }
  let ret = [];
  ret = ret.concat(inorderTraversal(root.left));
  ret.push([root.val]);
  ret = ret.concat(inorderTraversal(root.right));
  return ret;
};
