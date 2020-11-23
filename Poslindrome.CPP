#include <iostream>
using namespace std;

bool isPolindrome(const std::string& name)
{
   int len=name.size()-1;
   int mid=name.size()/2;
   for(int i=0;i<mid;i++)
      if(name[i]!=name[len-i])
         return false;
 
   return true;    
}


int main()
{
    std::string name;
    cout<<"Enter input";
    getline(std::cin,name); cout<<"you entered:"<<name<<endl;
    cout<<isPolindrome(name)<<endl;
}
