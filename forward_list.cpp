/******************************************************************************

forward list 
funcions insert_after, emplace_after , sort , merge
without sort merge only concatinate two list(), unique only remove adjucent duplicate, remove, remove_if
*******************************************************************************/
#include <stdio.h>
#include<iostream>
#include<forward_list>
using namespace std;
bool cmp_fun(int a, int b)
{
    return a > b;
}
 
void printlist(forward_list<int>&list1, forward_list<int>&list2)
{
    
     for(auto &itr:list1)
    {
        
        cout << itr << " ";
        
    }
   cout << "\n" ;
     for(auto &itr:list2)
    {
        
        cout  << itr << " ";
    }
}
int main()
{
   
    forward_list<int> list1 = {2,3,4,57,8};
    forward_list<int> list2 = {33,13,54,7,58};
   // list1.insert_after(list1.begin(),8);
    printlist(list1 ,list2);
    list1.sort();
    list2.sort();
    cout << "\nafter sort\n"  ;
    printlist(list1 ,list2);
    //list1.merge(list2);
    //cout << "\nafter merge\n"  ;
   // printlist(list1 ,list2);
   // list1.splice_after(list1.begin(),list2);
   // cout << "\nafter splice\n"  ;
    printlist(list1 ,list2);
    //list1.remove(2);
    list1.remove_if([] (int n) {
      return   n < 8 ;
        
        
    });
    printlist(list1 ,list2);
    cout << "size of list2 ::" << std::distance(list2.begin(),list2.end()) << endl;
    return 0;
}
