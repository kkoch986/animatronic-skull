cmake_minimum_required(VERSION 3.10)
project(AnimatronicSkull)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add executable
add_executable(${PROJECT_NAME}
    src/main.cpp
    src/video/video_processor.cpp
    src/audio/audio_processor.cpp
    src/control/control_system.cpp
)

# Include directories
target_include_directories(${PROJECT_NAME} PRIVATE
    include
    include/video
    include/audio
    include/control
)

# Link libraries (add as needed)
# target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})