cmake_minimum_required(VERSION 3.21)
project(workshop4)

set(CMAKE_CXX_STANDARD 14)

add_executable(workshop4 main.cpp PoweredDevice.cpp PoweredDevice.h NoisyDevice.cpp NoisyDevice.h PrintingDevice.cpp PrintingDevice.h Printer.cpp Printer.h CopyingDevice.cpp CopyingDevice.h WirelessPrinter.cpp WirelessPrinter.h)
