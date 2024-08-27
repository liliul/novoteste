#include <iostream>
#include <sys/utsname.h>
#include <sys/sysinfo.h>

using namespace std;

void getSystemInfo() {
    struct utsname unameData;
    if (uname(&unameData) != 0) {
        perror("uname");
        return;
    }

    cout << "Informações do Sistema:" << endl;
    cout << "Nome do Sistema: " << unameData.sysname << endl;
    cout << "Nome da Máquina: " << unameData.nodename << endl;
    cout << "Versão: " << unameData.release << endl;
    cout << "Arquitetura: " << unameData.machine << endl;
}

void getMemoryInfo() {
    struct sysinfo info;
    if (sysinfo(&info) != 0) {
        perror("sysinfo");
        return;
    }

    cout << "Informações de Memória:" << endl;
    cout << "Memória Total: " << info.totalram * info.mem_unit / (1024 * 1024) << " MB" << endl;
    cout << "Memória Livre: " << info.freeram * info.mem_unit / (1024 * 1024) << " MB" << endl;
}

int main() {
    getSystemInfo();
    getMemoryInfo();
    return 0;
}
