#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int printLargest(string  , string );
int printLargest(string a , string b)
{
    string ab= a+b;
    string ba=b+a;
    if(ab>ba)
    {
        return true;
    }
    else
        {
            return false;
        }
}
int main ()
{
    int size;
    cout<<"enter the size of array :";
    cin>> size;
    string str;
    cout<<"\nEnter the numbers  : ";
    vector <string> arr;
    for(int i=0;i<size;i++)
    {
    cin>>str;
    arr.push_back(str);
    }
    sort(arr.begin(),arr.end(),printLargest);
    cout<<"\nThe  largest number formed combining entered numbers is ";

    for(int j=0;j<arr.size();j++)
    cout<<arr[j];
    return 0;

}
