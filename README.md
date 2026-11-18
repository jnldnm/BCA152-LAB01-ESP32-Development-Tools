# Laboratory Activity 1: Understanding the Development Tools

**Subject:** BCA152 - Microcontrollers  
**Laboratory Activity:** Understanding the Development Tools

## 1. Introduction

This repository documents BCA152 Laboratory Activity 1, based on the supplied Chapter 2 excerpt, *Understanding the Development Tools*. The activity introduces ESP32 development using ESP-IDF and PlatformIO and presents equivalent C++ Hello World applications.

## 2. About the Project

The project demonstrates two development workflows for ESP32 applications. The ESP-IDF implementation uses the Espressif framework, CMake project files, and the `app_main()` entry point. The PlatformIO implementation uses the Espressif32 platform, an ESP-IDF framework environment, and the `platformio.ini` configuration file.

Both implementations display `Hello world!` through the serial output. The supplied source material describes the development workflow and expected output; it does not include evidence that either implementation was executed on the repository owner's hardware.

##  3. Objectives

The supplied chapter does not present a separately numbered list of formal laboratory objectives. Its stated instructional scope supports the following activity objectives:

- Identify the purpose and basic components of ESP-IDF.
- Become familiar with Visual Studio Code and the Espressif IDF extension.
- Understand the role of CMake, Ninja, `idf.py`, and `esptool.py` in ESP-IDF development.
- Create a basic ESP-IDF application using C++.
- Understand compilation, firmware flashing, and serial monitoring.
- Create an equivalent application using PlatformIO.
- Understand the role of the PlatformIO project configuration and supported board environments.

## 4. Technologies and Requirements

### Development software and tools

| Technology | Purpose |
|---|---|
| Visual Studio Code | Integrated development environment used in the chapter. |
| ESP-IDF | Espressif development framework for ESP32 applications. |
| Espressif IDF extension | VS Code integration for ESP-IDF project management and development. |
| PlatformIO IDE / Core | Embedded development environment and command-line tooling. |
| C++ | Application programming language used by the examples. |
| CMake | ESP-IDF project and component build configuration. |
| Ninja | Build execution tool used by the ESP-IDF build system. |
| Python utilities | Support ESP-IDF development tasks. |
| `esptool.py` | Communicates with Espressif chips and manages firmware images. |
| Serial Monitor | Displays application output from the connected board. |

### Hardware specified by the source

The chapter identifies ESP32-S3-BOX-Lite and ESP32-C3-DevKitM-1 as its development kits. The PlatformIO examples use the `esp32s3box` and `esp32-c3-devkitm-1` board identifiers, respectively. The selected board configuration must correspond to the actual hardware.

### Version information

The chapter's examples specify ESP-IDF v4.4.4 and Python 3.10.11. It also references Visual Studio Code 1.77.3 at the time of publication. These are source-material version references, not claims about the latest releases.

## 5. Project Structure

```text
BCA152-LAB01-ESP32-Development-Tools/
├── README.md
├── ACTIVITY-ANSWERS.md
├── Documentation/
│   └── .gitkeep
└── SourceCode/
    ├── ESP-IDF/
    │   ├── CMakeLists.txt
    │   └── main/
    │       ├── CMakeLists.txt
    │       └── main.cpp
    └── PlatformIO/
        ├── platformio.ini
        └── src/
            └── main.cpp
```

- `README.md` contains the project overview and implementation documentation.
- `ACTIVITY-ANSWERS.md` contains the academic discussion supported by the supplied activity material.
- `Documentation/` is reserved for genuine project screenshots and supporting evidence. `.gitkeep` preserves the otherwise empty directory in Git.
- `SourceCode/ESP-IDF/` contains the ESP-IDF C++ application and its CMake configuration.
- `SourceCode/PlatformIO/` contains the PlatformIO C++ application and environment configuration.

## 6. Implementation Overview

### ESP-IDF implementation

The ESP-IDF application uses `main.cpp` as its source file. The root `CMakeLists.txt` includes the ESP-IDF project build system and declares the project. The component-level `main/CMakeLists.txt` registers `main.cpp` and the current directory as an include directory.

The application includes `<iostream>` and defines `app_main()` with C linkage. The function writes `Hello world!` to standard output. The chapter explains that standard output is redirected to the serial console by default.

### PlatformIO implementation

The PlatformIO example uses the Espressif32 platform and the ESP-IDF framework. Its `platformio.ini` file identifies the board, framework, serial monitor speed, and modem-control-line behavior. The application source is a C++ file under `src/` and uses the same `app_main()` entry point and output statement.

The chapter demonstrates an `esp32s3box` environment and an additional `esp32c3kit` environment. The board identifier for the latter is `esp32-c3-devkitm-1`.

### Build and monitoring concepts

The chapter describes compilation, firmware flashing, and serial monitoring as distinct development tasks. It introduces `idf.py` as the ESP-IDF task utility and `esptool.py` as a lower-level utility for ESP32 memory and firmware-image operations. PlatformIO provides equivalent project tasks through its interface and `pio` command-line utility.

## 7. Project Documentation

No project screenshots were included in the supplied materials. Accordingly, this submission does not claim that screenshots of project configuration, source code, firmware upload, or serial output exist.

## 8. Results and Discussion

The expected output of both example applications is the text `Hello world!` in the serial monitor. The ESP-IDF example uses `idf.py`-managed build, flash, and monitor operations. The PlatformIO example uses the configured PlatformIO environment and its Upload and Monitor tasks.

The supplied chapter presents the expected output in its example figures, including the ESP-IDF serial output on page 20 and the PlatformIO terminal output on page 29. These are textbook illustrations, not independent evidence of execution on the hardware associated with this repository. Therefore, successful local compilation, flashing, and hardware operation are not asserted here.

## 9. Conclusion

The activity introduces the main components of ESP32 development with ESP-IDF and PlatformIO. Through equivalent C++ Hello World examples, it explains project organization, build configuration, compilation, firmware flashing, and serial monitoring. The two workflows illustrate how the same basic application can be developed using Espressif's framework directly or through PlatformIO.

## 10. References

1. *Understanding the Development Tools*, Chapter 2, supplied laboratory reading, pp. 15–33.
2. Espressif Systems, [ESP-IDF Documentation](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/).
3. Espressif Systems, [ESP-IDF VS Code Extension](https://github.com/espressif/vscode-esp-idf-extension).
4. PlatformIO, [PlatformIO Documentation](https://docs.platformio.org/).
5. PlatformIO, [PlatformIO Registry](https://registry.platformio.org/).
6. Kitware, [CMake Documentation](https://cmake.org/documentation/).
