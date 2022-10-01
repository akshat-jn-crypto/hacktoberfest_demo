#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
    vector<int>v={1,2,3}
    
    for (auto i:v)
    {

    }
map<string,int>m;
m["w"]++;
for(auto p:m)
 {  m["z"]++;
    
     cout<<p.first<<" : "<<p.second++<<endl;
 }
 
//1. insert
m.insert(make_pair("Mango",100));

pair<string,int>p;
p.first = "Banana";
//p.second= 120;
m.insert(p);
// 2. insert
m["Apple"]=20;


string fruit;
cout<<"enter"<<endl;
cin>>fruit;

auto it = m.find(fruit);
//search
if(it!=m.end())
{
    cout<<"price of "<<fruit<<" is "<<m[fruit]<<endl;
 }
 else
 cout<<"fruit is not present"<<endl; 

//update the Price
 m[fruit] +=22;

 //erase
 m.erase(fruit);

 //2 search
 if(m.count(fruit))
 cout<<"Price is "<<m[fruit]<<endl;
 else
 cout<<"couldn't find "<<endl;

 //iterate over all the key value pairs
 for(auto it=m.begin(); it!=m.end(); it++)
 {
     cout<<it->first<<" and "<<it->second<<endl;
 }

 //for each loop
 for(auto p:m)
 {
     cout<<p.first<<" : "<<p.second<<endl;
 }
}