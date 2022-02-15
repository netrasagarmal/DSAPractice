#User function Template for python3

class Solution:
    def RedOrGreen(self,N,S):
        #code here
        str1=S
        if str1.count("R")<str1.count("G"):
            return str1.count("R")
        else:
            return str1.count("G")

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        N=int(input())
        S=input()
        
        ob=Solution()
        print(ob.RedOrGreen(N,S))
# } Driver Code Ends