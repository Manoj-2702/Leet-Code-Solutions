# 33. Search in Rotated Sorted Array

There is an integer array <i>nums</i> sorted in ascending order (with <b>distinct</b> values).
<br>
Prior to being passed to your function, <i>nums</i> is <b>possibly rotated</b> at an unknown pivot index <i>k</i> (<i>1 <= k < nums.length</i>) such that the resulting array is <i>[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]</i> (<b>0-indexed</b>). For example, <i>[0,1,2,4,5,6,7]</i> might be rotated at pivot index <i>3</i> and become <i>[4,5,6,7,0,1,2]</i>.
<br>
Given the array <i>nums</i> <b>after</b> the possible rotation and an integer <i>target</i>, return the <i>index of target if it is in nums, or -1 if it is not in nums.</i><br>

You must write an algorithm with <i>O(log n)</i> runtime complexity.

 
<br>
<b><ins>Example 1:</ins></b><br>

<i>Input:</i> nums = [4,5,6,7,0,1,2], target = 0<br>
<i>Output:</i> 4<br>
<BR>
<b><ins>Example 2:</ins></b><br>

<i>Input:</i> nums = [4,5,6,7,0,1,2], target = 3<br>
<i>Output:</i> -1<br>
<br>
<b><ins>Example 3:</ins></b>
<br>
<i>Input:</i> nums = [1], target = 0<br>
<i>Output:</i> -1<br>
 

<ins><b>Constraints:</b></ins>

- <i>1 <= nums.length <= 5000</i>
- <i>-104 <= nums[i] <= 104</i>
- All values of <i>nums</i> are <b>unique</b>.
- <i>nums</i> is an ascending array that is possibly rotated.
- <i>-104 <= target <= 104</i>
