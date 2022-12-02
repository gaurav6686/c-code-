#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;
int main(){
    // creation
    map<string,int> m;
    
    // insertion
    pair<string,int> p = make_pair("name",2);
    m.insert(p);
    pair<string,int> p1 = make_pair("add",1);
    m.insert(p1);
    pair<string,int> p2 = make_pair("state",3);
    m.insert(p2);
    
    cout<<m["add"]<<endl;
    cout<<m.at("name")<<endl;
    cout<<m.at("state")<<endl;

    map<string,int> :: iterator it;
    while(it != m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    


return 0;
}