/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

 
 
class que 
{
    
    stack<int> s1;
    stack<int> s2;
    public:
    void push(int x)
    {
        
        s1.push(x);
        
    }
    int pop()
    {
        
        if(s1.empty() && s2.empty()){
            cout << "queue is empty\n" ;
            return -1;
            
        }
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            
        }    
            
        int topvalue = s2.top();
        s2.pop();
        return topvalue;
        
    }
    
    bool empty()
    {
        if(s1.empty() and s2.empty())
        return true;
        else
        return false;
    }
};


int main()
{
    que q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    
   cout << q.pop() << endl;
   cout << q.pop() << endl;
   cout << q.pop() << endl;
   cout << q.pop() << endl;
}