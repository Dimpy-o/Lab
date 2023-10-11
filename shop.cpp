#include <iostream>
#include <string>
using namespace std;

int main() {
    int price[4] {18, 17, 33, 35};
    string vegetables[4] {"potato", "carrot", "cucumber", "tomato"};
    for (int i = 0; i < 4; i++){
        cout << vegetables[i] << ": " << price[i] << "\n";
    }
    return 0;
}