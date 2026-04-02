#include <iostream>
using namespace std;

double calcBlockReward(int height) {
    int epoch = height / 210000;
    double reward = 50.0;
    for (int i=0; i<epoch; i++) reward /= 2;
    return reward;
}

int main() {
    cout << "高度630000奖励: " << calcBlockReward(630000) << " BTC" << endl;
    return 0;
}
