Task Manager

My first small pet project (I hope it can be considered as such).  Task manager for creating, editing, and saving a list of tasks.

Functionality:
- Create tasks
- Edit tasks
- Deleting tasks
- Saving to JSON file
- Loading from a JSON file

How to run: 
1. Cloning the repository
Copy the project to your computer:
git clone https://github.com/kitoyaka/taskManProj.git
cd taskManProj

2. Install the dependencies
Make sure you have installed:
CMake (version 3.15 or later)
Compiler with C++20 support
The nlohmann/json library (already integrated via FetchContent)

3. Building the project
Create a folder for the build:
mkdir build && cd build

Use CMake to generate the build files:
cmake ..

Build the project:
cmake --build .

4. Run the program
./taskManProj

