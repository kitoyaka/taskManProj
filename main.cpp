#include <iostream>
#include "Task.h"
#include "TaskManager.h"
#include "libConnect.h"

int main() {

    Task taskExample, taskExample2;
    taskExample.taskCreation();
    taskExample2.taskCreation();
    std::cout << std::endl << "now goes taskmanager" << std::endl;
    TaskManager taskManExample;
    taskManExample.addTask (taskExample);
    taskManExample.addTask(taskExample2);
    taskManExample.displayTasks();

    return 0;
}
