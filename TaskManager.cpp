//
// Created by rigry on 17.11.2024.
//

#include "TaskManager.h"
#include "libConnect.h"
#include "Task.h"

void TaskManager::addTask(const Task& task) {
    tasksList.emplace_back(task);
}

void TaskManager::displayTasks(){
    std::cout << "Here is tasks list: " << std::endl;
    for (auto& task: tasksList) {
        task.getTaskName();
        std::cout << std::endl;
    }
}