# v2t
convert ffmpeg avframe to gl texture

## build

Only tested on Windows 10, Visual Studio 2017

1. install [vcpkg](https://github.com/Microsoft/vcpkg)
2. `vcpkg install zlib:x64-windows libpng:x64-windows glfw3:x64-windows ffmpeg:x64-windows`
3. `cmake ../src -G "Visual Studio 15 2017 Win64" -DCMAKE_TOOLCHAIN_FILE=D:\workspace\vcpkg\scripts\buildsystems\vcpkg.cmake`
