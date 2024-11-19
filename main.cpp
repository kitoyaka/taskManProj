#include <iostream>
#include "Task.h"
#include "TaskManager.h"


void menuDescription(TaskManager& taskManager) {
    short int answer;
    do {
        std::cout << "\n=== Menu ===\n";
        std::cout << "[1] Create new task\n";
        std::cout << "[2] Display all tasks\n";
        std::cout << "[3] Info about task\n";
        std::cout << "[4] Set task completed\n";
        std::cout << "[5] Delete task\n";
        std::cout << "[6] Task edit\n";
        std::cout << "[9] Exit\n";
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
            case 3:{
                int taskIndex;
                std::cout << "Enter task index: ";
                std::cin >> taskIndex;
                std::cout << "\n";
                taskManager.enterTask(taskIndex);
                break;
            }
            case 4:{
                int taskIndex;
                std::cout << "Enter task index: ";
                std::cin>> taskIndex;
                std::cout << "\n";
                taskManager.setTaskCompleted(taskIndex);
                break;
            }
            case 5: {
                int taskIndex;
                std::cout << "Enter task index: ";
                std::cin>> taskIndex;
                std::cout << "\n";
                taskManager.taskDeletion(taskIndex);
                break;
            }
            case 6:{
                int taskIndex;
                std::cout << "Enter task index: ";
                std::cin>> taskIndex;
                std::cout << "\n";
                taskManager.taskEdition(taskIndex);

                break;
            }
            default: {
                std::cout << "Try again!.\n";
                break;
            }
        }
    } while (answer != 9);
}


int main() {
    TaskManager taskManager;
    menuDescription(taskManager);
    return 0;

}
