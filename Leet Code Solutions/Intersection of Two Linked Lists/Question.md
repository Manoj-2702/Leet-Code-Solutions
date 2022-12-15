# 160. Intersection of Two Linked Lists

Given the heads of two singly linked-lists <i>headA</i> and <i>headB</i>, return <i>the node at which the two lists intersect</i>. If the two linked lists have no intersection at all, return <i>null.</i>
<br><br>
For example, the following two linked lists begin to intersect at node <i>c1</i>:
<br>
![image](https://user-images.githubusercontent.com/103581128/207885146-02f94de7-ecba-4add-9217-174a41e10c12.png)
<br>

The test cases are generated such that there are no cycles anywhere in the entire linked structure.
<br>
<b>Note</b> that the linked lists must <b>retain their original structure</b> after the function returns.

<b><b>Custom Judge:</b></b>

The inputs to the <b>judge</b> are given as follows (your program is <b>not</b> given these inputs):

<ins><i>intersectVal</i></ins> - The value of the node where the intersection occurs. This is 0 if there is no intersected node.<br>
<ins><i>listA</i></ins> - The first linked list.<br>
<ins><i>listB</i></ins> - The second linked list.<br>
<ins><i>skipA</i></ins> - The number of nodes to skip ahead in <i>listA</i> (starting from the head) to get to the intersected node.<br>
<ins><i>skipB</i></ins> - The number of nodes to skip ahead in <i>listB</i> (starting from the head) to get to the intersected node.<br>
<br>
The judge will then create the linked structure based on these inputs and pass the two heads, <i>headA</i> and <i>headB</i> to your program. If you correctly return the intersected node, then your solution will be <b>accepted</b>.
<br>

<b>Example 1:</b><br>
![image](https://user-images.githubusercontent.com/103581128/207885953-0531e60e-3677-4c0c-9ba0-5ef6c6b8b2d6.png)
<br>

<i>Input</i>: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3<br>
<i>Output</i>: Intersected at '8'<br>
<i>Explanation</i>: The intersected node's value is 8 (note that this must not be 0 if the two lists intersect).<br>
From the head of A, it reads as [4,1,8,4,5]. From the head of B, it reads as [5,6,1,8,4,5]. There are 2 nodes before the intersected node in A; There are 3 nodes before the intersected node in B.
- Note that the intersected node's value is not 1 because the nodes with value 1 in A and B (2nd node in A and 3rd node in B) are different node references. In other words, they point to two different locations in memory, while the nodes with value 8 in A and B (3rd node in A and 4th node in B) point to the same location in memory.
<br><br>

<b>Example 2:</b><br>
![image](https://user-images.githubusercontent.com/103581128/207886175-5b4a57bf-be89-4352-9502-804bee458b24.png)
<br>

<i>Input</i>: intersectVal = 2, listA = [1,9,1,2,4], listB = [3,2,4], skipA = 3, skipB = 1<br>
<i>Output</i>: Intersected at '2'<br>
<i>Explanation</i>: The intersected node's value is 2 (note that this must not be 0 if the two lists intersect).<br>
From the head of A, it reads as [1,9,1,2,4]. From the head of B, it reads as [3,2,4]. There are 3 nodes before the intersected node in A; There are 1 node before the intersected node in B.
<br><br>

<b>Example 3:</b><br>
![image](https://user-images.githubusercontent.com/103581128/207886508-e938e5be-0b7f-4b8f-b574-fcac6829552f.png)
<br>

<i>Input</i>: intersectVal = 0, listA = [2,6,4], listB = [1,5], skipA = 3, skipB = 2<br>
<i>Output</i>: No intersection<br>
<i>Explanation</i>: From the head of A, it reads as [2,6,4]. From the head of B, it reads as [1,5]. Since the two lists do not intersect, intersectVal must be 0, while skipA and skipB can be arbitrary values.<BR>
Explanation: The two lists do not intersect, so return null.
 
<br><br>
<ins><b>Constraints:</b></ins>

- The number of nodes of <i>listA</i> is in the <i>m</i>.
- The number of nodes of <i>listB</i> is in the <i>n</i>.
- <i>1 <= m, n <= 3 * 104</i>
- <i>1 <= Node.val <= 105</i>
- <i>0 <= skipA < m</i>
- <i>0 <= skipB < n</i>
- <i>intersectVal</i> is <i>0</i> if <i>listA</i> and <i>listB</i> do not intersect.
- <i>intersectVal == listA[skipA] == listB[skipB]</i> if </i>listA</i> and <i>listB</i> intersect.
