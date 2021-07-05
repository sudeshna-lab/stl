/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.


Note - for mutimap there is a option which is equal renge
this will return 2 itarator, we can make return type as auto 
find return us the pair based on the key
lower bound and upper bound give the same key's first value and 2nd value for the multimap
*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    
    map<int, string>mp ={{12,"sudeshna"},{10,"dillip"},{9,"mouvik"},{13,"babu"}};
    mp.insert(pair<int,string>(14,"archana")); // insert with pair
    mp.insert(make_pair(15,"kabita"));
    //decending order
    map<string, int,std::greater<>>mp2 ={{"sudeshna",15},{"dillip",30},{"mouvik",34},{"babu",67}};
    // with vector
    map<string , vector<int>>mp3;
    mp3["abc"].push_back(10);
    mp3["def"].push_back(11);
    mp3["def"].push_back(14);
    mp3["ref"].push_back(12);
    
    for(auto &it:mp3)
    {
        cout << it.first << " " ;
        for(auto &it2:it.second)
        {
            cout << it2 << " ";
        } 
        cout << endl;
    
    }
    
    for(auto &it:mp)
    {
        cout << it.first << " " << it.second  << "\n ";
        
    
    }
    //use of find function
    for (auto itr = mp.find(10); itr != mp.end(); itr++) {
       
        cout << itr->first << '\t' << itr->second << '\n';
    }
    for(auto &it:mp2)
    {
        cout << it.first << " " << it.second  << "\n ";
        
    
    }
    map<string, int>::iterator itr;
    cout << "\nThe map gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = mp2.begin(); itr != mp2.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
}