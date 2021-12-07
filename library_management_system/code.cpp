#include <bits/stdc++.h>
using namespace std;

class Library {
private:
  struct {
    int    id;
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
}
}
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

  } while (choice != 0);
  cout << "\n";

  return 0;
}