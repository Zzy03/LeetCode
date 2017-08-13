001.Two Sum
====  
problem
-------  
Given an array of integers, return indices of the two numbers such that they add up to a specific target.  
    
You may assume that each input would have exactly one solution, and you may not use the same element twice.  
  
Example:  
Given nums = [2, 7, 11, 15], target = 9,  
  
Because nums[0] + nums[1] = 2 + 7 = 9,  
return [0, 1].  
  
给定一个整数的数组，让你找到两个数，使得他们的和为特定的一个数。返回这两个数的下标值，并且第一个必须小于第二个。  题目假定对于特定的数，此数组总可以找到满足要求的数。

solution
--------
第一种方法是找出所有的配对，复杂度为O(n*n)  
  
第二种方法将时间复杂度减到O(n)，每一个数我们肯定需要遍历一次。但对于配对时的找数的过程，我们可以利用hashmap的思想实现在O(1)时间确定是否存在我们需要找的数。整个算法的过程为：遍历数组，对每一个遍历到的数若其对应的数hashmap中没有，则添加进hashmap；否则，证明我们已经找到两个数，结束程序。当我们遍历到的某一个数，其前面的数肯定已经在hashmap中。注意：hashmap用stl中的unordered_map实现而非map，提高效率，因为我们不需要hashmap有序；利用unordered_map的count函数而非find函数使code更加简洁。
