#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

vector<pair<string, int>> records;

void addRecord(string id, int weight)
{
    auto it = records.begin();
    while (it != records.end())
    {
        if (it->first == id && it->second == weight)
            return;
        ++it;
    }
    records.emplace_back(pair<string, int>(id, weight));
}

int main(int argc, char **argv)
{
    int a;
    cin >> a;

    for (int i = 0; i != a; ++i)
    {
        string id;
        int weight;
        cin >> id >> weight;
        addRecord(id, weight);
    }

    sort(records.begin(), records.end(), [](pair<string, int> a, pair<string, int> b)
         { return a.first > b.first; });

    auto its1 = records.begin(), its2 = records.begin();
    while (its2 != records.end())
    {
        while ((its2 + 1)->first == its1->first)
            ++its2;
        sort(its1, its2 + 1, [](pair<string, int> a, pair<string, int> b)
             { return a.second < b.second; });
        ++its2;
        its1 = its2;
    }

    auto it = records.begin();
    while (it != records.end())
    {
        cout << it->first << " " << it->second << endl;
        ++it;
    }
    return 0;
}
