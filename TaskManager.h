//
// Created by rigry on 17.11.2024.
//

#ifndef TASKMANPROJ_TASKMANAGER_H
#define TASKMANPROJ_TASKMANAGER_H
#include "libConnect.h"
#include "Task.h"

class TaskManager {
public:
    void addTask(const Task&);
    void displayTasks();
    void enterTask(int index);
    void setTaskCompleted(int index);
    void taskDeletion(int index);
    void taskEdition(int index);
    void saveToFile(const std::string& filename);
    void loadFromFile(const std::string& filename);
private:
    std::list<Task> tasksList;
};


#endif //TASKMANPROJ_TASKMANAGER_H
