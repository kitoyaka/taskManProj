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

    void taskDisplayInfo();
    void taskEditing();

    nlohmann::json toJSON() const {
        return nlohmann::json{{"taskName", taskName}, {"taskDescription", taskDescription}, {"taskStatus", taskStatus}};
    }

    static Task fromJSON(const nlohmann::json& jsonData){
        Task task;
        task.taskName = jsonData.at("taskName").get<std::string>();
        task.taskDescription = jsonData.at("taskDescription").get<std::string>();
        task.taskStatus = jsonData.at("taskStatus").get<bool>();
        return task;
    }

private:
    std::string taskName;
    std::string taskDescription;
    bool taskStatus;

};


#endif //TASKMANPROJ_TASK_H
