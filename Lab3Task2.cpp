#include "iostream"

using namespace std;

int First;
int Second;
int exist;
int notExist;

int indexDiff;
int valueDiff;

int main() {
    int size;
    cout << "Write array size\n";
    cin >> size;
    if (size < 2){
        cout << "We don`t play lake this";
        exit(EXIT_SUCCESS);
    }
    else {
        int nums[size], i;
        cout << "Write elements of array\n";
        for (i = 0; i < size; i++)
            cin >> nums[i];
            cout << "Write two int vars\n";
        cin >> indexDiff;
        cin >> valueDiff;
        for (int First = 0; First < size; First++) {
            for (int Second = 0; Second < size; Second++) {
                if ((First != Second) & (abs(First - Second) <= indexDiff) & (abs(nums[First] - nums[Second]) <= valueDiff)) {
                    exist++;
                }
            }
        }
        if (exist > 0) {
            cout << "True";
        } else {
            cout << "False";
        }
    }
}
