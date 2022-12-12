# 100. Same Tree

Given the roots of two binary trees <i>p</i> and <i>q</i>, write a function to check if they are the same or not.<br>

Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.<br>

<br>
<ins>Example 1:</ins><br>
![image](https://user-images.githubusercontent.com/103581128/207115785-142ae314-c4d4-4448-b2ff-804e1c86370b.png)

<br>
Input: p = [1,2,3], q = [1,2,3]<br>
Output: true<br><br>


<ins>Example 2:</ins><br>
![image](https://user-images.githubusercontent.com/103581128/207115326-438b3a76-78d5-4ac7-b7dd-a704faa6422b.png)
<br>

Input: p = [1,2], q = [1,null,2]<br>
Output: false<br>

<br>
<ins>Example 3:</ins><br>
![image](https://user-images.githubusercontent.com/103581128/207115830-135bdcc5-e54d-4563-bc26-3860839cb9a7.png)
<br>

Input: p = [1,2,1], q = [1,1,2]<br>
Output: false<br>
 
<br>

<ins><b>Constraints:</b></ins><br>

- The number of nodes in both trees is in the range [0, 100].<br>
- -104 <= Node.val <= 104<br>
