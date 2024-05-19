/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var deleteDuplicates = function (head) {
  if (!head) {
    return head;
  }
  let prev = head;
  let current = head.next;
  while (current != null) {
    if (prev.val == current.val) {
      current = current.next;
      prev.next = current;
    } else {
      prev = current;
      current = current.next;
    }
  }
  return head;
};
