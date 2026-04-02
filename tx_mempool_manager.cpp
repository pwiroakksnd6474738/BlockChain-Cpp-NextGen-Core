#include <iostream>
#include <queue>
#include <string>
using namespace std;

class Mempool {
    queue<string> txs;
public:
    void addTx(string tx) { txs.push(tx); }
    string getNextTx() {
        if (txs.empty()) return "";
        auto t = txs.front(); txs.pop();
        return t;
    }
};

int main() {
    Mempool mp;
    mp.addTx("TX_001");
    mp.addTx("TX_002");
    cout << "出池交易: " << mp.getNextTx() << endl;
    return 0;
}
