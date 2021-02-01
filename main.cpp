#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <cassert>
using namespace std;
using namespace std::string_literals;
void print(std::string::size_type n, std::string const &s)
{
    if (n == std::string::npos) {
        std::cout << "not found\n";
    } else {
        std::cout << "found: " << s.substr(n) << '\n';
    }
}
int main() {
    string s="Eto Proverka skillov string";
 string v;
    cout<<s<<endl;
    cout<<"1) Erase"<<endl;
s.erase(0,3);
    cout<<s<<endl;
    s.erase(std::find(s.begin(),s.end(),' '));
    cout<<s<<endl;
    s.erase(s.find(' '));
    std::cout << s << '\n';
    cout<<"2)Check if string is empty"<<endl;
cout<<boolalpha;
cout<<s.empty();
cout<<endl;
    cout<<"3)Puch back"<<endl;
s.push_back('s');
cout<<s<<endl;
    cout<<"4)Pop back"<<endl;
s.pop_back();
    cout<<s<<endl;
    v.append(3, '*');
    std::cout << "5)Append " <<endl;
   cout<< v << endl;
    std::cout << "6)Append with another string " <<endl;
    v.append(s);
   cout<<v<<endl;
    std::cout << "7)Append with another string(a part of it) " <<endl;
    v.append(s,4,4);
    cout<<v<<endl;
    cout<<"8)Replace"<<endl;
    s.replace(8,1, "red");
    cout<<s<<endl;
    cout<<"9)Substr"<<endl;
    cout<<s.substr(8,3)<<endl;
    cout<<"10)Find"<<endl;
        std::string::size_type n;
        // search from beginning of string
        n = s.find("is");
        print(n, s);
        return 0;
}
