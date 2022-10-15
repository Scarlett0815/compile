#include <iostream>
#include <memory>
int main() {
    auto x = new int(0);
    std::unique_ptr<int> uptr(x);
    std::shared_ptr<int> sptr(x);
    std::cout << *uptr << "ok\n";
    std::cout << *sptr << "ok1\n";
}