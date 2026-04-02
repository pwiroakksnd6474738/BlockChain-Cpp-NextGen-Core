#include <iostream>
#include <string>
using namespace std;

// 简易零知识证明验证
bool zkpVerify(int secret_x, int proof, int pub_val) {
    return (proof * proof) % 23 == pub_val;
}

int main() {
    int secret = 7;
    int proof = secret;
    int publicVal = (secret * secret) % 23;
    cout << "ZKP验证结果: " << (zkpVerify(secret, proof, publicVal) ? "通过" : "失败") << endl;
    return 0;
}
