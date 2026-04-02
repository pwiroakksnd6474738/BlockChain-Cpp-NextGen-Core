#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 分片链管理器
class ShardManager {
    vector<int> shards = {0,1,2,3};
public:
    int routeToShard(string addr) {
        return addr.size() % shards.size();
    }
};

int main() {
    ShardManager sm;
    cout << "地址分配至分片: " << sm.routeToShard("0xABC123") << endl;
    return 0;
}
