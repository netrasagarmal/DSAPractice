#User function Template for python3


class Solution:
    def modify(self, s):
        # code here
        first = s[0]
        result=""
        if first.islower():
            result =s.lower()
        else:
            result=s.upper()
        return result;

#{ 
#  Driver Code Starts
#Initial Template for Python 3

t = int (input ())
for tc in range (t):
    s = input ()
    ob = Solution()
    print(ob.modify(s))
# } Driver Code Ends