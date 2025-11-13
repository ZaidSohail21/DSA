#include "myLL.h"
int main() {
    MyCLL cll;

    int n = 41;  
    int start = 1;
    int skip = 3;

    for (int i = 1; i <= n; i++) {
        cll.InsertAtTail(i);
    }

    cll.display();

    int winner = cll.kill(start, skip);

    cout << "The winner is: " << winner << endl;

    return 0;
}