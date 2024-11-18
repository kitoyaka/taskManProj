#include <iostream>
#include "Task.h"
#include "TaskManager.h"
#include "libConnect.h"

void menuDescription(TaskManager& taskManager) {
    short int answer;
    do {
        std::cout << "\n=== Menu ===\n";
        std::cout << "[1] Create new task\n";
        std::cout << "[2] Display all tasks\n";
        std::cout << "[3] Exit\n";
        std::cout << "Your choice: ";
        std::cin >> answer;

        switch (answer) {
            case 1: {
                    Task task;
                    task.taskCreation();
                    taskManager.addTask(task);
                break;
            }
            case 2: {
                taskManager.displayTasks();
                break;
            }
            case 3: {
                std::cout << "Exit\n";
                break;
            }
            default: {
                std::cout << "Try again!.\n";
                break;
            }
        }
    } while (answer != 3);
}




int main() {
    TaskManager taskManager;
    menuDescription(taskManager);
    return 0;

}
