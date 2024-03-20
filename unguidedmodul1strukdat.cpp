#include <iostream>
#include <map>

int main() {
    
    std::map<std::string, int> umur;

    umur["John"] = 25;
    umur["Alice"] = 30;
    umur["Bob"] = 20;

    std::cout << "Umur John: " << umur["John"] << std::endl;
        
    umur["John"] = 26;
    std::cout << "Umur John setelah diubah: " << umur["John"] << std::endl;

    umur.erase("Alice");

        std::cout << "Daftar Umur:" << std::endl;
    for (const auto& pasangan : umur) {
        std::cout << pasangan.first << ": " << pasangan.second << std::endl;
    }

    return 0;
}
