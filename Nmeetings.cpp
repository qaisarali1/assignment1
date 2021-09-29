#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// Structure for storing starting time,
// finishing time and position of meeting.
struct meeting {
    int start;
    int end;
    int pos;
};


bool comparator(struct meeting m1, meeting m2)
{
    return (m1.end < m2.end);
}


void maxMeeting(int s[], int f[], int n)
{
    struct meeting meet[n];
    for (int i = 0; i < n; i++)
    {
        //starting time
        meet[i].start = s[i];

        // Finishing time
        meet[i].end = f[i];

        //index of meeting
        meet[i].pos = i + 1;
    }

    // Sorting of meeting according to their finish time.
    sort(meet, meet + n, comparator);


    vector<int> m;


    m.push_back(meet[0].pos);

    // time_limit to check whether new
    // meeting can be conducted or not.
    int time_limit = meet[0].end;


    for (int i = 1; i < n; i++) {
        if (meet[i].start >= time_limit)
        {

            m.push_back(meet[i].pos);


            time_limit = meet[i].end;
        }
    }

    // Print final selected meetings.
    for (int i = 0; i < m.size(); i++) {
        cout << m[i] << " ";
    }
}

int main()
{
    int size = 5;

    int s[size] ;
    cout<< "Enter Starting time :";

        for(int i=0;i<5;i++ )
        {
            cin>>s[i];
        }

    int f[size] ;

    cout << "Enter finishing time :";
        for(int j=0;j<5;j++ )
        {
            cin>>f[j];
        }
    // Number of meetings.
    int n = sizeof(s) / sizeof(s[0]);

    // Function call
    maxMeeting(s, f, n);

    return 0;
}
