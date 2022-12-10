You are given the heads of two sorted linked lists <b>list1</b> and <b>list2</b>.
<br><br>
Merge the two lists in a one <b>sorted</b> list. The list should be made by splicing together the nodes of the first two lists.
<br><br>
Return the <i>head of the merged linked list.</i>

 
<br><br>
Example 1:
<br>
![image](https://user-images.githubusercontent.com/103581128/206823049-43a0285c-8fab-427c-8ea5-e1823191187c.png)


Input: list1 = [1,2,4], list2 = [1,3,4]<br>
Output: [1,1,2,3,4,4]

<br><br>
Example 2:
<br>
Input: list1 = [], list2 = []<br>
Output: []<br><br>


Example 3:<br>
Input: list1 = [], list2 = [0]<br>
Output: [0]<br>
 <br><br>

Constraints:
<ul>
<li>The number of nodes in both lists is in the range [0, 50].</li>
<li>-100 <= Node.val <= 100</li>
<li>Both list1 and list2 are sorted in non-decreasing order.</li>
</ul>
