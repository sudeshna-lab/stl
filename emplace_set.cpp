/******************************************************************************

1.emplace , insert with set 
2.

*******************************************************************************/
#include <stdio.h>
#include<iostream>
#include<set>
#include<cstring>
using namespace std;
class Test
{
   
    public:
    char *person ;
    int x ;
   // Test():x(10 , ){cout << "constructor\n" ;}; // default constructor
 //   Test(int var=0 ):x(var)
    Test(int var , char *personname)
    {  
        int size = strlen(personname);
        cout << size << endl;
        cout << "construnctor\n" ;
        person = new char[size];
        x = var;
        strcpy(person,personname);
        cout << person << endl;
        
    }
    Test(const Test &objTest)
    {
       
        person = new char[16];
        x = objTest.x;
          strcpy(person,objTest.person);
        cout << "copy\n";
    };
    void print()
    {
        cout <<  x << endl;
    }
};
bool operator < (const Test& obj1 , const Test& obj2)
{
    
    return obj1.x < obj2.x;
}
 int main()
 {
     
     char *personname = "sudeshna";
      char *personname2 = "dillip";
     set<Test> classTypeSet;
     //classTypeSet.insert(Test());
     classTypeSet.emplace(10 , personname2);
     classTypeSet.emplace(5 , personname);
     for(auto &it: classTypeSet)
     {
         cout << it.x << " " << it.person << endl;
     }
     
 }