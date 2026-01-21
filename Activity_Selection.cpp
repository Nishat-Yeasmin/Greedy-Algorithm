#include<iostream>
using namespace std;

struct activity{
    char name[5];
     int start_time;
     int end_time;
};
int main()
{
    int n;
    cout<<"Enter the no. of activity: ";
    cin>>n;

    activity act[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the activity name: ";
            cin>>act[i].name;
        cout<<"Enter the start time: ";
        cin>>act[i].start_time;
         cout<<"Enter the end time: ";
        cin>>act[i].end_time;
    }


    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(act[i].end_time>act[j].end_time)
            {
                activity temp = act[i];
                act[i]= act[j];
                act[j] = temp;
            }
        }
    }

    cout<<"Selected Activities: "<<endl;

    int selected=1;
    int last_finished=act[0].end_time;

     cout<< "Activity name: "<<act[0].name<<" Start time: "<<act[0].start_time<<" End time: "<<act[0].end_time<<endl;
    for(int i=1;i<n;i++)
    {
        if(act[i].start_time>=last_finished)
        {
             cout<< "Activity name: "<<act[i].name<<" Start time: "<<act[i].start_time<<" End time: "<<act[i].end_time<<endl;
             
            selected+=1;
            last_finished = act[i].end_time;
        }
    }

    cout<<"Maximum activity: "<<selected<<endl;

}
