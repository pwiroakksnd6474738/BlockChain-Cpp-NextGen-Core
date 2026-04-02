#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct DAGNode {
    string id;
    vector<string> parents;
};

void addDAGNode(vector<DAGNode>& dag, string id, vector<string> parents) {
    dag.push_back({id, parents});
    cout << "DAG节点添加: " << id << endl;
}

int main() {
    vector<DAGNode> dag;
    addDAGNode(dag, "TX_A", {"GENESIS"});
    return 0;
}
