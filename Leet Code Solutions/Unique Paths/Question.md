# 62. Unique Paths

There is a robot on an <b>m x n</b> grid. The robot is initially located at the <b>top-left corner</b> (i.e., <i>grid[0][0]</i>). The robot tries to move to the <b>bottom-right corner</b> (i.e., <i>grid[m - 1][n - 1]</i>). The robot can only move either down or right at any point in time.
<br>
Given the two integers m and n, return the <i>number of possible unique paths that the robot can take to reach the bottom-right corner.</i>
<br>
The test cases are generated so that the answer will be less than or equal to <i>2 * 109</i>.

 

Example 1:<br><br>
![image](https://user-images.githubusercontent.com/103581128/206824734-690fd79f-f13f-4492-b369-2990ece69ea8.png)

Input: m = 3, n = 7<br>
Output: 28<br>

<br>
Example 2:<br><br>
Input: m = 3, n = 2<br>
Output: 3<br>
Explanation: From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:<br>
<li>1. Right -> Down -> Down</li>
<li>2. Down -> Down -> Right</li>
<li>3. Down -> Right -> Down</li>
 
<br><br>
<b>Constraints:</b>
<ul>
<li>1 <= m, n <= 100</li>
</ul>
