#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    ifstream file("/proc/cpuinfo");
    string content;

    while(file >> content) {
        cout << content << ' ';
    }
    return 0;
}
