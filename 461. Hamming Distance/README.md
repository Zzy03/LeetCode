001.Two Sum
====  
problem
-------  
The Hamming distance between two integers is the number of positions at which the corresponding bits are different.  
  
Given two integers x and y, calculate the Hamming distance.  

Note:  
0 ≤ x, y < 2^31.  

Example:  

Input: x = 1, y = 4  

Output: 2  

Explanation:  
1   (0 0 0 1)  
4   (0 1 0 0)    
       ?   ?  

The above arrows point to positions where the corresponding bits are different.  


solution
--------
第一种方法直接移位比较每一位上的数是否不同  
第二种方法采用两个数异或的方式。两个数异或得到的数上1对应的位数就是之前不相同的位数，求出共有多少个1即可。n&(n-1)可以去掉最右边的1。
