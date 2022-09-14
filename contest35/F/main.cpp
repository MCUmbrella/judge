#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

vector<pair<string, int>> records;

int main(int argc, char **argv)
{
    int a;
    cin >> a;

    for (int i = 0; i != a; ++i)
    {
        string id;
        int weight;
        cin >> id >> weight;
        records.emplace_back(pair<string, int>(id, weight));
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

    auto it0 = records.begin();
    while(it0 != records.end())
    {
        if (it0 -> first == (it0 + 1) -> first && it0 -> second == (it0 + 1) -> second)
            it0 = records.erase(it0);
        else ++it0;
    }

    auto it = records.begin();
    while (it != records.end())
    {
        cout << it->first << " " << it->second << endl;
        ++it;
    }
    return 0;
}
