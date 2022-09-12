#include<iostream>
#include<list>

using namespace std;

list<int> bois;
list<int> kickedBois;

void checkKickedBois()
{
    if(kickedBois.size()==2)
    {
        auto it = kickedBois.begin();
        cout<< *it << " " << *(++it) <<endl;
        kickedBois.clear();
    }
}

int main(int argc, char** argv)
{
    int n, m;
    int c=1;
    cin >> n >> m;
    
    cout<<n<<" "<<m<<endl;
    
    for(int i=0; i!=n; i++)
        bois.emplace_back(i+1);
    
    auto it=bois.begin();
    while(bois.size()!=0)
    {
        cout<<endl<<"bois.size() = "<<bois.size()<<endl;
        cout<<"kickedBois.size() = "<<kickedBois.size()<<endl;
        cout << *it <<endl;

        if(c==m)
        {
            cout << "kick bois[" << *it << "]\n";
            kickedBois.emplace_back(*it);
            it = bois.erase(it);
            c=1;
            checkKickedBois();
            if(it == bois.end())
            {
                cout<<"RESET IT"<<endl;
                it = bois.begin();
            }
            continue;
        }
        it++;
        c++;
        checkKickedBois();
        if(it == bois.end())
        {
            cout<<"RESET IT"<<endl;
            it = bois.begin();
            continue;
        }
    }
    checkKickedBois();
    return 0;
}
