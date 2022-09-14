#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class record
{    
    public:
    string id;
    int weight;

    record(string id, int weight)
    {
        this->id = id;
        this->weight = weight;
    }

    bool equals(record* r)
    {
        return this->id == r->id && this->weight == r->weight;
    }

    string toString()
    {
        return id + " " + to_string(weight);
    }
};

vector<record> records;

void addRecord(string id, int weight)
{
    auto it = records.begin();
    while(it != records.end())
    {
        if(it->id == id && it->weight == weight) return;
        it++;
    }
    records.emplace_back(record(id, weight));
}

int main(int argc, char** argv)
{
    int a;
    cin>>a;
    
    for(int i=0; i!=a; i++)
    {
        string id;
        int weight;
        cin>>id>>weight;
        addRecord(id, weight);
    }
    
    sort(records.begin(), records.end(), [](record a, record b){return a.id > b.id;});
    
    auto its1 = records.begin(), its2 = records.begin();
    while(its2<records.end())
    {
        while((its2+1)->id == its1->id) its2++;
        sort(its1, its2+1, [](record a, record b){return a.weight < b.weight;});
        its2++;
        its1=its2;
    }
    
    auto it=records.begin();
    while(it!=records.end())
    {
        cout<<it->toString()<<endl;
        it++;
    }
    return 0;
}
