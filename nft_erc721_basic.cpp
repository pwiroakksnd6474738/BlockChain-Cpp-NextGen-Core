#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class ERC721NFT {
    unordered_map<int, string> owners;
public:
    void mint(int id, string addr) { owners[id] = addr; }
    string ownerOf(int id) { return owners[id]; }
};

int main() {
    ERC721NFT nft;
    nft.mint(101, "Wallet_0x1");
    cout << "NFT101持有者: " << nft.ownerOf(101) << endl;
    return 0;
}
