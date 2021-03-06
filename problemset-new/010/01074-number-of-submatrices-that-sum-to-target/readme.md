# 1074. Number of Submatrices That Sum to Target

题意：给一个矩阵，问满足要求的子矩阵个数。
这里的要求是矩阵和等于给定的值。  

思路：对于子矩阵问题，有一个万能的方法。  
首先是枚举子矩阵的上面那条边，然后枚举矩阵的下面那条边，这个过程中，可以累积计算出每一列的值，目前复杂度`O(n^2)`。
这样，问题就转化为了有一个一维数组（列的累计值），求这个数组里面满足要求的子数组个数。
对于一维数组求子数组最优值，则需要具体情况具体分析了，但是复杂度不要超过`O(n^2)`，最优的是`O(n)`，次之是`O(n log(n))`。  

比如对于最大子矩阵和，就可以转化为最大子序列和，就是`O(n)`的复杂度，综合就是`O(n^3)`。  
这道题是求子序列和等于指定值的个数，那就只能统计前缀和`O(n)`，然后判断快速判断当前后缀是否存在答案了`O(log(n))`。  


具体来说，假设当前位置`now`为后缀的子序列`pre+1,...,now`是一个答案，则说明当前前缀`1,2,3,..., now`和减去前面的某个前缀和`1,2,...,pre`，等于指定值。
翻过来就是，当前前缀`1,2,3,..., now`减去指定值后，存在某个`1,2,...,pre`等于这个差值。

这里使用`map`或者`hash map`储存前缀和以及个数，然后查找差值是否存在，存在则找到一个答案。

## C++语言  


[tiankonguse.cpp](./2074-tiankonguse.cpp)

