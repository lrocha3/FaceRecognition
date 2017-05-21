# FaceRecognition
This project goal is to do face recognition using a Raspberry Pi, a Camera, OpenCV, C++ and CMake tools.

![image](https://cloud.githubusercontent.com/assets/7374528/26288126/ce6f3db2-3e82-11e7-832d-cf0520712ea9.png)

## How to Set-up the project

### Dependencies:
* [OpenCV](http://opencv.org/)
* [Camera](https://www.raspberrypi.org/products/camera-module/) in my case Raspberry Pi Camera
* Compiler for C++11 Standard or later

### Steps to build:
```
cd FaceRecognition
mkdir build
cd build
cmake .. (only the first time)
make -jX (X is the number of cores)
```

### Steps to run:
```
cd ..
cd bin
./MyCameraProgram
```
Note: You need the Raspberry Pi connected to a Display to see the camera stream or VNC configured.
