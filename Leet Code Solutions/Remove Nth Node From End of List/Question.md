# 19. Remove Nth Node From End of List

Given the <i>head</i> of a linked list, remove the <i>n<sup>th</sup></i> node from the end of the list and return its head.
<br><br>

<b>Example 1:</b><br>
![image](https://user-images.githubusercontent.com/103581128/207905660-efc2a8b2-5701-49d2-9f5a-24e7adeaf3ac.png)
<br>


<i>Input:</i> head = [1,2,3,4,5], n = 2<br>
<i>Output:</i> [1,2,3,5]<br>
<br>

<b>Example 2:</b><br>

<i>Input:</i> head = [1], n = 1<br>
<i>Output:</i> []<br>
<br>

<b>Example 3:</b>

<i>Input:</i> head = [1,2], n = 1<br>
<i>Output:</i> [1]<br>
 
<br>
<b><ins>Constraints:</ins></b><br>

- The number of nodes in the list is <i>sz</i>.
- <i>1 <= sz <= 30</i>
- <i>0 <= Node.val <= 100</i>
- <i>1 <= n <= sz</i>
