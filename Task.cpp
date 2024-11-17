//
// Created by rigry on 17.11.2024.
//
#include "libConnect.h"
#include "Task.h"

void Task::taskSetStatus() {
    taskStatus = 0;
}

void Task::taskCreation() {

    std::cout << "Enter task name: ";
    std::cin >> taskName;
    std::cout << std::endl << "Add any description for task: ";
    std::cin >> taskDescription;
    taskSetStatus();
}

void Task::getTaskName() {
    std::cout << taskName;
}

