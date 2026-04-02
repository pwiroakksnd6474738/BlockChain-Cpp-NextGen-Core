#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class AccountModel {
    unordered_map<string, uint64_t> balances;
public:
    void createAccount(string addr, uint64_t init) { balances[addr] = init; }
    bool transfer(string from, string to, uint64_t amt) {
        if (balances[from] < amt) return false;
        balances[from] -= amt; balances[to] += amt;
        return true;
    }
    uint64_t get(string addr) { return balances[addr]; }
};

int main() {
    AccountModel am;
    am.createAccount("A", 1000);
    am.transfer("A", "B", 300);
    cout << "B余额: " << am.get("B") << endl;
    return 0;
}
