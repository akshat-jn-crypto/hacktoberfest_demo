#include<iostream>
#include<map>
#include<cstring>
using namespace std;

int main()
{
    multimap<char,string>m; //insert, find and erase fork in time complexity logn
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        char ch;
        string s;
        cin>>ch>>s;
        m.insert(make_pair(ch,s));
    }
    auto it = m.begin();
    m.erase(it); //erase single
auto f =m.find('c');

    //erase multiple
    auto it2 = m.lower_bound('b');
    auto it3 = m.upper_bound('d');
    for(auto it4=it2;it4!=it3; it4++)//complexity logn
{
    cout<<it4->second<<","<<endl;
}
    for(auto p:m)
    {
        cout<<p.first<<"->"<<p.second<<endl;
    }
}