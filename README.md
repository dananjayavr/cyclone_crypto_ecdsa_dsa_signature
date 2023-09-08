### Prerequisites

 - CMake (project built/tested using CMake 3.27.4)
 - Linux distro (project built/tested on Ubuntu 22.04.3 LTS x86_64)

 Note: Using CMake, the project can be also made to build in Windows.


### Project architecture

 - main.c : main entrypoint
 - debug.c : helper function definitions
 - prng_simulator.c (.h) : placeholder implementation of a PRNG 
 - lib/common : common files for CycloneCRYPTO (Open)
 - lib/core : core files for CycloneCRYPTO (Open)
 - lib/cyclone_crypto : complete source code for CycloneCRYPTO (Open)
 - lib/crypto_config.h : used to enable/disable different CRYPTO modules
 - lib/os_port_config.h : contains information about the target platform


### Build 

 - create a 'build' directory at the project root.
 - From within 'build' directory, execute the following commands:
   - cmake ..
   - cmake --build .
- ./dsa_signature_demo will run the demo.


#### About lib/ folder

  This folder contains all the files/folders available for CycloneCRYPTO suite. Naturally, not all files/folders are used for this demo.
  lib/CMakeLists.txt contains a list of dependencies for the current project.
