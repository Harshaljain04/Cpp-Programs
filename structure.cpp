#include<iostream>
using namespace std;

int main()
{
    struct emp{
        int id;
        char name[50];
        float salary;
    } emp[5];

        for(int i=0;i<2;i++){
        cout<<"Enter Employee Id, Name, Salary :-"<<endl;
        cin>>emp[i].id>>emp[i].name>>emp[i].salary;
        }
        for(int i=0;i<2;i++)
        {
            cout<<emp[i].id<<" "<<emp[i].name<<" "<<emp[i].salary<<endl;
        }
}