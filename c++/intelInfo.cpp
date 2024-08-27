#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void readIntelGPUInfo() {
    // Caminho para a informação do driver de vídeo
    const string path = "/sys/class/drm/card0/device/driver/module/";

    // Abrir o arquivo para leitura
    ifstream file(path + "version", ios::in);

    if (!file) {
        cerr << "Não foi possível abrir o arquivo para leitura." << endl;
        return;
    }

    // Ler o conteúdo do arquivo
    string line;
    while (getline(file, line)) {
        cout << "Informação do driver da GPU: " << line << endl;
    }

    file.close();
}

int main() {
    readIntelGPUInfo();
    return 0;
}
