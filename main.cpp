#include <iostream>
#include <string>

// Lab 13 — Richard Webster
// CIS 5 Week 13 · Names and a roster

struct Student {
  std::string name;
  int id;
  double gpa;
};

void printStudent(const Student& s) {
  // TODO: print the id, name, and gpa on one line, then "\n"
  std::cout << s.id << " " << s.name << " " << s.gpa << "\n"; 
}

int main() {
  
  std::string first, last;
  std::cout << "First: ";
  std::cin >> first;
  std::cout << "Last: ";
  std::cin >> last;
  
  std::string full = first + " " + last;
  
  std::cout << "Full name: " << full << "\n" << "Length: " << full.size() << "\n";
  
  const int N = 3;
  Student roster[N] = {
    {"Ada", 1, 3.9}, {"Ben", 2, 2.7}, {"Cy", 3, 3.2}
  };
  
  std::cout << "All students:\n";
  for (int i = 0; i < N; i++) {
    printStudent(roster[i]);
  }

  std::cout << "Honors (gpa 3.0 or above):\n";
  int honors = 0;
  for (int i = 0; i < N; i++) {
    
    if (roster[i].gpa >= 3.0) {
    printStudent(roster[i]);
    honors++;
   }
  }
  std::cout << honors << " of 3" << "\n";
 
  return 0;
}
