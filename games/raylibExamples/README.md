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
