#include <bits/stdc++.h>
using namespace std;
/*Linked list code
needed to :
1. Update prev node to NULL after node is created
2. Add Display, insert node, delete node functions*/
template <class T>
class DLL{
    struct node{
        T data;
        node *next;
        node* prev;
    }*start,*current;
    public:
    DLL(){
        start=NULL;
        current=NULL;
    }    
    void CreateNode(){
        node* temp;
        temp= new node;
        temp -> next=NULL;
        cout<<"\n Enter the data";
        cin>>temp->data;
        if(start==NULL){
            start=temp;
            current=start;
        }
        else{
            current->next=temp;
            current=current->next;
        }
    }
    void insert_node(){
        
    }
    void delete_node(){

    }
    void display_node(){

    }
};

int static id;
class Library {
private:
  struct {
    string title;
    string publication;
    int    issue_date;
    int    issue_month;
    int    issue_year;
    int    due_date;
    int    due_month;
    int    due_year;
    string due_date;
    string rent_tenure = 2;
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
}
};

// While issuing a book, will need a function, that checks the availability of
// the book, and then give user a response.
int main() {
  Library one;
  int     choice = 1;
  do {
    cout << "\n================== LIBRARY MANAGEMENT SYSTEM ================\n";
    cout << "\n1. Insert Books";
    cout << "\n2. Search Book";
    cout << "\n3. Sort Book";
    cout << "\n4. Display details of a Book";
    cout << "\n5. Issue a Book";
    cout << "\n6. Get the Due date of a Book";
    cout << "\n0. Exit";
    cin >> choice;
    if (choice == 1) {
      one.get_data();
    } else if (choice == 2) {
      one.search();
    } else if (choice == 3) {
      one.sort_book();
    } else if (choice == 4) {
      one.put_data();
    } else if (choice == 5) {
      one.issue();
    } else if (choice == 6) {
      one.get_due_date();
    }
    else if(choice==7)
    { one.add_user();
    }

  } while (choice != 0);
  cout << "\n";

  return 0;
}
