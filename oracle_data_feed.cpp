#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 预言机：喂价上链
struct Oracle {
    string dataType;
    string value;
    void feed(string v) { value = v; }
    string getOnChainData() { return value; }
};

int main() {
    Oracle priceOracle;
    priceOracle.feed("BTC/USD: 67342");
    cout << "预言机上链数据: " << priceOracle.getOnChainData() << endl;
    return 0;
}
