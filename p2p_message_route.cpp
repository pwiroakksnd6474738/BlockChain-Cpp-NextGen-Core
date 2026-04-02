#include <iostream>
#include <vector>
#include <string>
using namespace std;

void broadcastMsg(vector<string> nodes, string msg) {
    for (auto n : nodes) cout << n << " 收到: " << msg << endl;
}

int main() {
    vector<string> nodes = {"Node1","Node2","Node3"};
    broadcastMsg(nodes, "NEW_BLOCK_HEIGHT_1200");
    return 0;
}
