//
// Created by rigry on 17.11.2024.
//

#ifndef TASKMANPROJ_TASK_H
#define TASKMANPROJ_TASK_H
#include "libConnect.h"

class Task {

public:
    void taskCreation();
    void setTaskCompleted();
    void getTaskName();
    bool isTaskCompleted();
    void taskDisplayInfo();
    void taskEditing();

private:
    std::string taskName;
    std::string taskDescription;
    bool taskStatus;

};


#endif //TASKMANPROJ_TASK_H
