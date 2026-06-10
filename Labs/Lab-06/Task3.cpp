#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;  
    int x;             

    cout << "Enter test scores (-1 to stop): " << endl;

    do {
        cout << "Enter score: ";
        cin >> x;

        if (x != -1) {
            nums.push_back(x);   
        }

    } while (x != -1);

    cout << "\nTotal scores: " << nums.size() << endl;

    if (nums.size() > 0) {
        cout << "First score: " << nums[0] << endl;
        cout << "Last score: " << nums[nums.size() - 1] << endl;
    } else {
        cout << "No scores entered." << endl;
    }

    return 0;
}
