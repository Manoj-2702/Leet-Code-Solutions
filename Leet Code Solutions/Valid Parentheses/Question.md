# 20. Valid Parentheses

Given a string <b>s</b> containing just the characters <b>'('</b>, <b>')'</b>, <b>'{'</b>, <b>'}'</b>, <b>'['</b> and <b>']'</b>, determine if the input string is valid.
<br><br>
An input string is valid if:

- Open brackets must be closed by the same type of brackets.
- Open brackets must be closed in the correct order.
- Every close bracket has a corresponding open bracket of the same type.
 
<br>
Example 1:<br>
Input: s = "()"<br>
Output: true<br>

<br>
Example 2:<br>
Input: s = "()[]{}"<br>
Output: true<br>
<br>

Example 3:<br>
Input: s = "(]"<br>
Output: false<br>
 
<br><br>
Constraints:
<uL>
<li><b>1 <= s.length <= 104</b></li>
<li>s consists of parentheses only '()[]{}'.</li>
</ul>
