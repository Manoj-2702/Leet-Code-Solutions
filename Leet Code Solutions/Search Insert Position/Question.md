Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
<br>
You must write an algorithm with <i>O(log n)</i> runtime complexity.

<br>
Example 1:<br>
Input: nums = [1,3,5,6], target = 5<br>
Output: 2<br>

<br>
Example 2:<br>
Input: nums = [1,3,5,6], target = 2<br>
Output: 1<br>

<br>
Example 3:<br>
Input: nums = [1,3,5,6], target = 7<br>
Output: 4<br>
 
<br><br><br>
<b>Constraints:</b><br>
<ul>
<li>1 <= nums.length <= 104</li>
<li>-104 <= nums[i] <= 104</li>
<li>nums contains <b>distinct</b> values sorted in <b>ascending order.</b></li>
<li>-104 <= target <= 104</li>
</ul>
