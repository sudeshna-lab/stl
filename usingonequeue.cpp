/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

class stck
{
    
    queue<int> q1;
    
    public:
    void push(int x)
    {
        
        q1.push(x);
        for(int i =0;i<q1.size();i++)
        {
            q1.push(q1.front());
            q1.pop();
        }
    }
    
    int pop()
    {
        if(q1.empty())
        return -1;
        int top = q1.front();
        q1.pop();
        return top;
    }
    
};

int main()
{
    stck stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    
    cout << stack.pop() << " " ;
    cout << stack.pop() << " " ;
    
    
    
    
    
    
}