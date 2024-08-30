LibArm_kinematics used by [Unity Reachy Simulator](https://github.com/pollen-robotics/reachy2021-unity-package)

To compile the lib

### Linux
```
git clone --recursive git@github.com:pollen-robotics/Arm_kinematics.git
cd Reachy2_arm_kinematics
mkdir build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
make -j
```


### Windows
From an environment with cmake, as a vs command prompt:
```
git clone --recursive git@github.com:pollen-robotics/Arm_kinematics.git
cd Reachy2_arm_kinematics
mkdir build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
cmake --build . --config Release
``` 
Copy the lib from the *build/Release* directory to the *Packages/ReachySimulator/Plugins* of your Unity project.
