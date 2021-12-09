#include <bits/stdc++.h>
using namespace std;
int static id;
class Library {
    protected:
    struct Book{
        string title;
        string publication;
        int    issue_date;
        int    issue_month;
        int    issue_year;
        int    due_date;
        int    due_month;
        int    due_year;
        string rent_tenure;
        // 2 weeks
        // 14 days
    };
    public:
    void get_data();
    void search();
    void sort_book();
    void put_data();
    void issue();
    void get_due_date();
    void add_user();
};
class shelf: protected Library{
    Book create_shelf(int n){
        Book arr[n];
        for (int i = 0; i < n; i++)
        {
            cout<<"Enter the : ";
            cin>>arr[n].title;
            cout<<"Enter the : ";
            cin>>arr[n].issue_date;
            cin>>arr[n].issue_month;
            cin>>arr[n].issue_year;
            cout<<"Enter the : ";
            cin>>arr[n].due_date;
            cin>>arr[n].due_month;
            cin>>arr[n].due_year;
            cout<<"Enter the : ";
            cin>>arr[n].rent_tenure;

        }
        return arr[n];
        
    }
};