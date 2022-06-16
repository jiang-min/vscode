#include <vector>
#include <iostream>


using namespace std;

int main(int argc, char* argv[])
{
    cout<<"abcd"<<endl;
    string s = "abc";
    s.push_back('d');
    cout<<s<<'\n';
    s.erase(s.begin());
    cout<<s<<'\n';
    s.insert(s.begin(),'f');
    cout<<s<<'\n';
    cout<<s.size()<<'\n';
    cout<<s.length();
    
    return 0;

} 