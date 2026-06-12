run 
```bash

gcc nomeapp.c -o build/app -lraylib -lGL -lm -lpthread -ldl -lrt -lX11


#install libs linux base ubuntu
sudo apt install -y \
    libx11-dev \
    libxrandr-dev \
    libxi-dev \
    libxcursor-dev \
    libxinerama-dev \
    libxext-dev \
    libgl1-mesa-dev \
    libxinerama-dev  


# raylib
git clone https://github.com/raysan5/raylib.git      

cd raylib

mkdir build
cd build

cmake ..
make -j$(nproc)

sudo make install
sudo ldconfig
```

compilar para web
```bash

# instalar emsdk

# pasta download
# 2. Clone o repositório
git clone https://github.com/emscripten-core/emsdk.git

# 3. Entre na pasta
cd emsdk

# 4. Baixe e instale o SDK mais recente
./emsdk install latest

# 5. Ative o SDK mais recente
./emsdk activate latest

# 6. Configure o ambiente para o terminal atual
source ./emsdk_env.sh

#ou
nano ~/.zshrc

# emscripten
export EMSDK_QUIET=1
source /home/liliu/Documentos/gclone/testes/emscripten/emsdk/emsdk_env.sh > /dev/null

# configura raylib para compilar para web
# na pasta download que ta o clone da raylib
git clone https://github.com/raysan5/raylib.git 

# 1. Entre na subpasta src
cd /home/liliu/Downloads/raylib/src

# 2. Garanta que a pasta está limpa de compilações antigas
make clean

# 3. Execute a compilação para WebAssembly
emmake make PLATFORM=PLATFORM_WEB

# agora compilar jogo
emcc nomeJogo.c -o build/index.html -Os -Wall -I/home/liliu/Downloads/raylib/src -L/home/liliu/Downloads/raylib/src -lraylib.web -s USE_GLFW=3 -s ASYNCIFY --shell-file /home/liliu/Downloads/raylib/src/minshell.html

emrun build/index.html

```
