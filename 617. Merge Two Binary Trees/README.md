617.Merge Two Binary Trees
====  
problem
-------  
Given two binary trees and imagine that when you put one of them to cover the other, some nodes of the two trees are overlapped while the others are not.  

You need to merge them into a new binary tree. The merge rule is that if two nodes overlap, then sum node values up as the new value of the merged node.  
Otherwise, the NOT null node will be used as the node of new tree.  

Example 1:  
Input:   
        Tree1                     Tree 2                  
          1                         2                             
         / \                       / \                            
        3   2                     1   3                        
       /                           \   \                      
      5                             4   7                  
Output: 
Merged tree:
	     3
	    / \
	   4   5
	  / \   \ 
	 5   4   7
Note: The merging process must start from the root nodes of both trees.  

合并两颗树。
给出两颗树，合并成新树。若它们相同位置上的节点均非空，那么新树对应位置的节点值则为原节点值之和。若只有一个节点为空，那么新节点为非空节点值。若均为空，新树对应节点也为空。

solution
--------
合并两个二叉树，就是在对应的节点位置上进行值相加，为空的节点按值为零处理。用递归方法可以求出合并的二叉树。