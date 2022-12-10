class Solution:
    def uniquePaths(self,m,n):
        patharray=[1]*n
        for i in range(1,m):
            one=1
            for j in range(1,n):
                patharray[j]=patharray[j]+one
                one =patharray[j]
        return patharray[-1]
