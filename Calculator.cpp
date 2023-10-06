#include<iostream>
using namespace std;
void addition();
void subtraction();
void multiplication();
void division();
void even_odd();
void percentage();

float a,b;

int main()
{
    int choice;
    do{
    cout<<"Select the operation you want to perform:-"<<endl<<"1.Addition"<<endl<<"2.Subtraction"<<endl<<"3.Multiplication"<<endl<<"4.Division"<<endl<<"5.Even-Odd"<<endl<<"6.Percentage"<<endl<<"7.Exit"<<endl;
    cin>>choice;
    
    switch(choice)
    {
        case 1:
        {
            addition();
            break;
        }
        case 2:
        {
            subtraction();
            break;
        }
        case 3:
        {
            multiplication();
            break;
        }
        case 4:
        {
            division();
            break;
        }
        case 5:
        {
            even_odd();
            break;
        }
        case 6:
        {
            percentage();
            break;
        }
        case 7:
        {
            return 0;
        }

        default: cout<<"Invalid choice";
    }
    }while(1);
}

void addition()
{
    cout<<"Enter the numbers :- ";
    cin>>a>>b;
    float result;
    result=a+b;
    cout<<"Answer is "<<result<<endl;
}

void subtraction()
{
    cout<<"Enter the numbers :- ";
    cin>>a>>b;
    float result;
    result=a-b;
    cout<<"Answer is "<<result<<endl;
}

void multiplication()
{
    cout<<"Enter the numbers :- ";
    scanf("%f %f",&a,&b);
    float result;
    result=a*b;
    cout<<"Answer is "<<result<<endl;
}

void division()
{
    cout<<"Enter the numbers :- ";
    cin>>a>>b;
    float result;
    result=a/b;
    cout<<"Answer is "<<result<<endl;
}

void even_odd()
{
    int c,d;
    cout<<"Enter Numbers ";
    cin>>c>>d;

    if(c%2==0)
    {
        cout<<"C is Even Number"<<endl;
    }
    else
    {
        cout<<"Odd Number"<<endl;
    }
    
    if(d%2==0)
    {
        cout<<"Even Number"<<endl;
    }
    else
    {
        cout<<"Odd Number"<<endl;
    }
}

void percentage()
{
    int s1,s2,s3,s4,s5,total;
    float perc;
    cout<<"Enter marks of s1 :- "<<endl;
    cin>>s1;
    cout<<"Enter marks of s2 :- "<<endl;
    cin>>s2;
    cout<<"Enter marks of s3 :- "<<endl;
    cin>>s3;
    cout<<"Enter marks of s4 :- "<<endl;
    cin>>s4;
    cout<<"Enter marks of s5 :- "<<endl;
    cin>>s5;
    total=s1+s2+s3+s4+s5;
    perc=((float)total/500)*100;
    cout<<"Percentage obtained :- "<<perc<<endl;
}