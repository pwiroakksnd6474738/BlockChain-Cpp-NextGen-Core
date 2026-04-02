#include <iostream>
#include <vector>
using namespace std;

int mpcMultiSign(vector<int> parts) {
    int res = 1;
    for (int p : parts) res *= p;
    return res % 10007;
}

int main() {
    vector<int> nodeSigs = {11, 23, 37};
    cout << "多方联合签名: " << mpcMultiSign(nodeSigs) << endl;
    return 0;
}
