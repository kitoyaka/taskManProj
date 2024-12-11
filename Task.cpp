//
// Created by rigry on 17.11.2024.
//
#include "libConnect.h"
#include "Task.h"



void Task::taskCreation() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout << "Enter task name: ";
    std::getline(std::cin, taskName);
    std::cout << std::endl << "Add any description for task: ";
    std::getline(std::cin, taskDescription);
    taskStatus = 0;
}

void Task::getTaskName() {
    std::cout << taskName;
}


void Task::setTaskCompleted() {
    taskStatus = 1;
}

void Task::taskDisplayInfo() {
    std::cout << "Task Name: " << taskName << std::endl;
    std::cout << "Description: " << taskDescription << std::endl;
    std::cout << "Status: " << (taskStatus == 1 ? "Completed" : "Not Completed") << std::endl;
}
void Task::taskEditing() {
    std::cout << "Edit task name: ";
    std::cin >> taskName;
    std::cout << "\n" << "Edit task description: ";
    std::cin >> taskDescription;
}

