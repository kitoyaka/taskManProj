//
// Created by rigry on 17.11.2024.
//

#include "TaskManager.h"
#include "libConnect.h"
#include "Task.h"

void TaskManager::addTask(const Task& task) {
    tasksList.emplace_back(task);
}

void TaskManager::displayTasks() {
    std::cout << "Here is tasks list: " << std::endl;
    int index = 0;
    for (auto& task : tasksList) {
        std::cout << "[" << index << "] ";
        task.getTaskName();
        std::cout << std::endl;
        ++index;
    }
}


void TaskManager::enterTask(int index) {
    if(index >= 0 && index < tasksList.size())
    {
       auto it = std::next(tasksList.begin(), index);
       it->taskDisplayInfo();
    }
    else
        std::cout<< "Wrong task index \n";
}

void TaskManager::setTaskCompleted(int index) {
    if(index >= 0 && index < tasksList.size())
    {
        auto it = std::next(tasksList.begin(), index);
        it->setTaskCompleted();
    }
    else
        std::cout<< "Wrong task index \n";
}

void TaskManager::taskDeletion(int index) {
    if(index >= 0 && index < tasksList.size())
    {
        auto it = std::next(tasksList.begin(), index);
        tasksList.erase(it);
    }
    else
        std::cout<< "Wrong task index \n";

}

void TaskManager::taskEdition(int index) {
    if(index >= 0 && index < tasksList.size())
    {
        auto it = std::next(tasksList.begin(), index);
        it->taskEditing();
    }
    else
        std::cout << "Wrong task index \n";
}

void TaskManager::saveToFile(const std::string &filename) {
    nlohmann::json jsonTasks;
    for(const auto& task : tasksList){
        jsonTasks.push_back(task.toJSON());
    }
    std::ofstream file(filename);
    file << jsonTasks.dump(4);
    file.close();
}

void TaskManager::loadFromFile(const std::string &filename) {
    std::ifstream file(filename);
    if(file.is_open())
    {
        nlohmann::json  jsonTasks;
        file >> jsonTasks;
        tasksList.clear();
        for (const auto& jsonTasks : jsonTasks) {
            tasksList.push_back(Task::fromJSON(jsonTasks));
        }
    }
}