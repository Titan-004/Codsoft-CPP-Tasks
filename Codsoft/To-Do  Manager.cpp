#include <iostream>
#include <vector>

using namespace std; 


vector<string> tasks;

void showTasks() {
    if (tasks.empty()) {
        cout << "No tasks found." << endl;
    } else {
        cout << "Tasks:" << endl;
        for (int i = 0; i < tasks.size(); i++) {
            cout << i + 1 << ". " << tasks[i] << endl;
        }
    }
}

void addTask(const string &task) {
    tasks.push_back(task);
    cout << "Added task: " << task << endl;
}

void deleteTask(int taskIndex) {
    if (taskIndex >= 1 && taskIndex <= tasks.size()) {
        cout << "Deleted task: " << tasks[taskIndex - 1] << endl;
        tasks.erase(tasks.begin() + taskIndex - 1);
    } else {
        cout << "Invalid task index. No task deleted." << endl;
    }
}

int main() {
    while (true) {
        cout << "\nTodo List Manager" << endl;
        cout << "1. Show Tasks" << endl;
        cout << "2. Add Task" << endl;
        cout << "3. Delete Task" << endl;
        cout << "4. Quit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore(); 

        if (choice == 1) {
            showTasks();
        } else if (choice == 2) {
            string task;
            cout << "Enter the task to add: ";
            getline(cin, task);
            addTask(task);
        } else if (choice == 3) {
            showTasks();
            int taskIndex;
            cout << "Enter the task number to delete: ";
            cin >> taskIndex;
            deleteTask(taskIndex);
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid choice. Please choose a valid option." << endl;
        }
    }

    cout << "Goodbye!" << endl;
    return 0;
}
