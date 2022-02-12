// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
vector<int> sortVector(vector<int> v){
    sort(v.begin(), v.end());
    
    return v;
}
void SortedStack :: sort()
{
   //Your code here
   
   if(s.empty()!=true|| s.size()!=1){
       vector<int> v;
       while(!s.empty()){
           int x = s.top();
           v.push_back(x);
           s.pop();
       }
       
       v = sortVector(v);
       
       for(int i=0; i<v.size(); i++){
           s.push(v[i]);
       }
   }
   
   
}