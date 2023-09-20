#include <iostream>
#include <Windows.h>
#include <string>
#include <fstream>
#include <cstdio>
#include <cstdlib> // For system()
#include <cstring> // For strcpy()

using namespace std;

// Function to display the disclaimer and get user consent
bool showDisclaimer() {
    cout << "Welcome to AE's AIOT (All-In-One Tool)!" << endl;
    cout << "By using this tool, you agree to the following disclaimer:" << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "Disclaimer: Gerco, the owner of this software, is not responsible for any damages" << endl;
    cout << "that may occur while using this tool. Use it at your own risk." << endl;
    cout << "---------------------------------------------------------" << endl;

    char choice;
    do {
        cout << "Do you accept the terms of the disclaimer? (y/n. Press C for cleanup/deletion): ";
        cin >> choice;
        cin.ignore(10000, '\n'); // Clear the input buffer

        if (choice == 'y' || choice == 'Y') {
            return true;
        } else if (choice == 'n' || choice == 'N') {
            return false;
        } else if (choice == 'C' || choice == 'c') {
    // Cleanup option: Remove "run.exe" and ".vscode" folder
    if (remove("run.exe") == 0) {
        cout << "Successfully removed 'run.exe'." << endl;
    } else {
        cout << "Failed to remove 'run.exe'. \n     NOTE: AIOT.exe has replaced run.exe, so this error will display when it tries to delete the executable." << endl;
    }
    if (remove("AIOT.exe") == 0) {
        cout << "Successfully removed 'AIOT.exe'." << endl;
    } else {
        cout << "Failed to remove 'run.exe'." << endl;
    }

    // Remove the ".vscode" folder using a platform-specific command
    #ifdef _WIN32
    if (system("rmdir /s /q .vscode") == 0) {
        cout << "Successfully removed '.vscode' folder." << endl;
    } else {
        cout << "Failed to remove '.vscode' folder.\n      NOTE: This error is very common, if you've never opened the folder with VScode, this error will display." << endl;
    }
    #else
    if (system("rm -rf .vscode") == 0) {
        cout << "Successfully removed '.vscode' folder." << endl;
    } else {
        cout << "Failed to remove '.vscode' folder.\n      NOTE: This error is very common, if you've never opened the folder with VScode, this error will display." << endl;
    }
    #endif

    cout << "Cleanup completed. Press Enter to exit the program." << endl;
    cin.get(); // Wait for Enter key press
    exit(0);
} else {
            cout << "Invalid choice. Please enter 'y' for yes, 'n' for no, or 'C' to cleanup." << endl;
        }
    } while (true);
}

int main() {
    if (!showDisclaimer()) {
        cout << "You have chosen not to accept the disclaimer. Exiting the program." << endl;
        return 1;
    }

    // TODO: Add the functionality of AE's AIOT here

    cout << "Thank you for using AE's AIOT. Have fun!" << endl;
    return 0;
}
