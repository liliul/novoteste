#include <iostream>
#include <cstdio>
#include <memory>
#include <stdexcept>
#include <string>

using namespace std;

string exec(const char* cmd) {
    array<char, 128> buffer;
    string result;
    unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd, "r"), pclose);
    if (!pipe) throw runtime_error("popen() falhou!");
    while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
        result += buffer.data();
    }
    return result;
}

void getIntelGPUInfo() {
    string command = "lshw -c video | grep 'Intel'";
    string output = exec(command.c_str());

    cout << "Informações da GPU Intel:" << endl;
    cout << output << endl;
}

int main() {
    getIntelGPUInfo();
    return 0;
}
