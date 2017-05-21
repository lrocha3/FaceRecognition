# FaceRecognition

Using Raspberry Pi + Camera + OpenCV + CMake

## Dependencies:
* [OpenCV](http://opencv.org/)
* [Camera](https://www.raspberrypi.org/products/camera-module/) in my case Raspberry Pi Camera
* Compiler for C++11 Standard or later

## Steps to build:
```
cd FaceRecognition
mkdir build
cd build
cmake .. (only the first time)
make -jX (X being the number of cores you want)
```


## Steps to run:
```
cd ..
cd bin
./MyCameraProgram
```
Note: You need the Raspberry Pi connected to a Display to see the camera stream or VNC configured.
