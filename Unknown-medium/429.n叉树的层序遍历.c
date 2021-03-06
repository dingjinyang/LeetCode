/*
 * @lc app=leetcode.cn id=429 lang=c
 *
 * [429] N叉树的层序遍历
 *
 * https://leetcode-cn.com/problems/n-ary-tree-level-order-traversal/description/
 *
 * algorithms
 * Medium (65.02%)
 * Likes:    79
 * Dislikes: 0
 * Total Accepted:    17.8K
 * Total Submissions: 27.4K
 * Testcase Example:  '[1,null,3,2,4,null,5,6]'
 *
 * 给定一个 N 叉树，返回其节点值的层序遍历。 (即从左到右，逐层遍历)。
 * 
 * 例如，给定一个 3叉树 :
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 返回其层序遍历:
 * 
 * [
 * ⁠    [1],
 * ⁠    [3,2,4],
 * ⁠    [5,6]
 * ]
 * 
 * 
 * 
 * 
 * 说明:
 * 
 * 
 * 树的深度不会超过 1000。
 * 树的节点总数不会超过 5000。
 * 
 */
#include <stdlib.h>

#include "Node.h"
// @lc code=start
/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     int numChildren;
 *     struct Node** children;
 * };
 */
#define MAX_SIZE 10240
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** levelOrder(struct Node* root, int* returnSize, int** returnColumnSizes) {
  *returnSize = 0;
  int front = 0, rear = 0, last = 0;
  struct Node **queue = (struct Node**)malloc(sizeof(struct Node*) * MAX_SIZE), *p;
  *returnColumnSizes = (int*)calloc(1000, sizeof(int));
  int** result = (int**)malloc(sizeof(int*) * 1000);
  if (root == NULL) return result;
  queue[front++] = root;
  result[(*returnSize)] = (int*)calloc(front - rear, sizeof(int));
  while (front != rear) {
    p = queue[rear++];
    result[*returnSize][(*returnColumnSizes)[*returnSize]++] = p->val;
    for (int i = 0; i < p->numChildren; i++) {
      queue[front++] = p->children[i];
    }
    if (rear - 1 == last) {
      result[++(*returnSize)] = (int*)calloc(front - rear, sizeof(int));
      last = front - 1;
    }
  }
  return result;
}
// @lc code=end
