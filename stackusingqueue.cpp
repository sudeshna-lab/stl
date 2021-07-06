/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/



#include <bits/stdc++.h>
using namespace std;

 
 
class stck 
{
    
    queue<int> q1;
    queue<int> q2;
    int curr_size ;
    public:
    stck()
    {
        curr_size = 0;
    }
    void push(int x)
    {
        curr_size ++;
        q2.push(x);
        while(!q1.empty())
        {
         q2.push(q1.front());
         q1.pop();
        }
        
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    int pop()
    {
            
        int topvalue = q2.front();
        q2.pop();
        curr_size --;
        return topvalue;
        
    }
    

};


int main()
{
    
    stck stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    stk.push(50);
    
    
    cout << stk.pop() << " " ;
    cout << stk.pop() << " " ;
    cout << stk.pop() << " " ;
    cout << stk.pop() << " " ;
    cout << stk.pop() << " " ;
}