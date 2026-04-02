#include <iostream>
#include <string>
using namespace std;

// 闪电网络支付通道
class LightningChannel {
    int balanceA, balanceB;
public:
    LightningChannel(int a, int b) : balanceA(a), balanceB(b) {}
    void offChainTransfer(int amt) {
        balanceA -= amt; balanceB += amt;
    }
    void showFinal() {
        cout << "A最终: " << balanceA << " | B最终: " << balanceB << endl;
    }
};

int main() {
    LightningChannel ch(1000, 500);
    ch.offChainTransfer(150);
    ch.showFinal();
    return 0;
}
