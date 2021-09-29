#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
string chooseandswap(string,char,char) ;
string chooseandswap(string str, char x, char y)
{
     for(int i=0; i<str.size();i++)
    {
        if(str[i] == x)
        {
           // int check=i;
            str[i]=y;
        }
        else if (str[i]== y)
            {
                str[i]=x;
            }
    }

    return str;

}
int main()
{
    char a,b;
    //string st;
    string str;
    cout<<" Enter the string =";
    cin>>str;
    cout<<"choose a character you want to replace :";
    cin>> a;
    cout<<"choose the character you want to change the character you choose :";
    cin>>b;
    chooseandswap(str,a,b);
    cout<<chooseandswap(str,a,b);
    return 0;
}
