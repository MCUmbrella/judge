#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct record
{
    string id;
    int weight;

    record(string id, int weight)
    {
        this -> id = id;
        this -> weight = weight;
    }
};

vector<record> records;

int main(int argc, char **argv)
{
    records.reserve(131072);
    int a;
    cin >> a;

    for (int i = 0; i != a; ++i)
    {
        string id;
        int weight;
        cin >> id >> weight;
        records.emplace_back(record(id, weight));
    }

    sort(records.begin(), records.end(), [](record a, record b)
         { return a.id > b.id; });

    auto its1 = records.begin(), its2 = records.begin();
    while (its2 != records.end())
    {
        while ((its2 + 1)->id == its1->id)
            ++its2;
        sort(its1, its2 + 1, [](record a, record b)
             { return a.weight < b.weight; });
        ++its2;
        its1 = its2;
    }

    auto it = records.begin();
    while (it != records.end())
    {
        if ((it + 1)->id == it->id && (it + 1)->weight == it-> weight)
        {
            ++it;
            continue;
        }
        cout << it->id << " " << it->weight << endl;
        ++it;
    }
    return 0;
}
