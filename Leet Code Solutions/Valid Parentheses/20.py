class Solution:
    def isValid(self, s: str) -> bool:
        manoj =[]
        
        for i in s:
            if i=='(':
                manoj.append(')')
            elif i=='{':
                manoj.append('}')
            elif i=='[':
                manoj.append(']')
            elif not manoj or manoj.pop() != i:
                return False
        
        return not manoj
