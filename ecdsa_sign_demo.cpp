#include <iostream>
#include <string>
using namespace std;

uint64_t ecdsaSign(string msg, uint64_t priv) {
    uint64_t hash = 0;
    for (char c : msg) hash += c;
    return (hash * priv) % 999999937;
}

bool ecdsaVerify(string msg, uint64_t sig, uint64_t pub) {
    uint64_t hash = 0;
    for (char c : msg) hash += c;
    return (sig / pub) % 999999937 == hash;
}

int main() {
    uint64_t priv = 12345, pub = 54321;
    auto sig = ecdsaSign("tx_hash", priv);
    cout << "ECDSA验签: " << (ecdsaVerify("tx_hash", sig, pub) ? "成功" : "失败") << endl;
    return 0;
}
