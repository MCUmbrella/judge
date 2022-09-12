#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

string types[3]={"int","char","double"};
string reserved[8]={"if","else","switch","for","while","int","char","double"};

bool isValidName(string str)
{
    if(str[0] >= '0' && str[0] <= '9') return 0;
    for(size_t i=0; i!=str.length(); i++)
    {
        char c=str[i];
        if(!( (c>='0'&&c<='9') || (c>='A'&&c<='Z') || (c>='a'&&c<='z') || c=='_' ))
            return 0;
    }
    for(int i=0; i!=8; i++)
        if(str == reserved[i])
            return 0;
    return 1;
}

bool isValidType(string str)
{
    for(int i=0; i!=3; i++)
        if(str == types[i])
            return 1;
    return 0;
}

int main(int argc, char** argv)
{
    int a;
    cin>>a;

    for(int i=0; i!=a; i++)
    {
        string in[4];
        for(int j=0; j!=4; j++)
            cin>>in[j];

        if(!isValidName(in[1]) || !isValidType(in[0]))
        {
            cout<<"Wrong!"<<endl;
            continue;
        }

        if(in[2] != "=")
        {
            cout<<"Wrong!"<<endl;
            continue;
        }

        if(in[3][in[3].length()-1] != ';')
        {
            cout<<"Wrong!"<<endl;
            continue;
        }
        if(in[0] == "int")
        {
            bool f=0;
            for(size_t j=0; j!=in[3].length()-1; j++)
                if(in[3][j] < '0' || in[3][j] > '9')
                    f=1;
            if(f)
            {
                cout<<"Wrong!"<<endl;
                continue;
            }
        }
        else if(in[0] == "char")
        {
            bool f=0;
            if(in[3].length() != 2) f=1;
            char c=in[3][0];
            if(!((c>='A' && c<='Z') || (c>='a' && c<='z'))) f=1;
            if(f)
            {
                cout<<"Wrong!"<<endl;
                continue;
            }
        }
        else if(in[0] == "double")
        {
            bool f=0;
            bool d=0;
            for(size_t j=0; j!=in[3].length()-1; j++)
                if(!(in[3][j] == '.' || (in[3][j] >= '0' && in[3][j] <= '9')))
                    f=1;
            for(size_t j=0; j!=in[3].length()-1; j++)
                if(in[3][j] == '.')
                {
                    if(d)
                    {
                        f=1;
                        break;
                    }
                    if(j==0 || j==in[3].length()-2)
                    {
                        f=1;
                        break;
                    }
                    d=1;
                }
            if(f || !d)
            {
                cout<<"Wrong!"<<endl;
                continue;
            }
        }

        for(int j=1; j!=4; j++)
            if(j!=3) cout<<in[j]<<" ";
            else
            {
                in[3].erase(in[3].length()-1);
                cout<<in[3];
            }
        cout<<endl;
    }
    return 0;
}
