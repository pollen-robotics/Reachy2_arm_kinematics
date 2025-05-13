LibArm_kinematics used by [Unity Reachy Simulator](https://github.com/pollen-robotics/reachy2021-unity-package)

To compile the lib

### Linux
```
git clone --recursive https://github.com/pollen-robotics/Reachy2_arm_kinematics
cd Reachy2_arm_kinematics
mkdir build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
make -j
```

### Android

See [Android documentation](https://developer.android.com/ndk/guides/cmake) for the cross compiling details. The target platform here is a Oculus Quest 3.

```
git clone --recursive https://github.com/pollen-robotics/Reachy2_arm_kinematics
cd Reachy2_arm_kinematics
mkdir build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_TOOLCHAIN_FILE=$NDK/build/cmake/android.toolchain.cmake \
    -DANDROID_ABI=arm64-v8a \
    -DANDROID_PLATFORM=android-31
make -j
```


### Windows
From an environment with cmake, as a vs command prompt:
```
git clone --recursive https://github.com/pollen-robotics/Reachy2_arm_kinematics
cd Reachy2_arm_kinematics
mkdir build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
cmake --build . --config Release
``` 
Copy the lib from the *build/Release* directory to the *Packages/ReachySimulator/Plugins* of your Unity project.

