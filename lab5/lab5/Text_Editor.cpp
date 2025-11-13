#include <iostream>
#include "MyTextEdit.h"
using namespace std;

int main() {
    TextEditor editor;
    int choice;
    char ch;

    do {
        cout << "\n--- Text Editor Menu ---\n";
        cout << "1. Type character\n";
        cout << "2. Delete last character\n";
        cout << "3. Undo\n";
        cout << "4. Redo\n";
        cout << "5. Show current text\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        
         if (choice == 1) {
              cout << "Enter character to type: ";
                cin >> ch;
                editor.typeCharacter(ch);
         }
         else if (choice == 2) {
             editor.deleteCharacter();
          }
         else if (choice == 3) {
              editor.undo();
          }
         else if (choice == 4) {
              editor.redo();
         }
         else if (choice == 5) {
             editor.showText();
         }
         else if (choice == 0) {
             cout << "Exiting...\n";
             break;
         }
         else {
             cout << "Invalid choice!\n";
         }
     } while (choice != 0);

    return 0;
}