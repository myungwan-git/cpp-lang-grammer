#include <iostream>
#include <iomanip>
using namespace std;

void findGrades(const int scores[], char grades[], int size) {
    char temp[] = { 'F',
                    'F',
                    'F',
                    'F',
                    'F',
                    'F',
                    'D',
                    'C',
                    'B',
                    'A',
                    'A',
    };

    for(int i=0; i<size; i++) {
        grades[i] = temp[scores[i]/10];
        cout << " cout " << grades[i] << " AND " << scores[i]/10 << endl;
    }

    return ;
}

int main() {
    string names[2] = {"userA","userB"};
    int scores[2] = {3,100};
    char grades[2];

    findGrades(scores,grades,2);

    for(int i=0; i<2; i++) {
        cout << setw(10) << left << names[i] << "   " << setw(2);
        cout << scores[i] << "    " << setw(2) << grades[i] << endl;
    }
    
    return 0;
}