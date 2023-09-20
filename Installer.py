import os
import subprocess
import platform
import sysconfig

# Installer version
installer_version = "2.3"

# Get the installed C++ compiler version
cpp_version = sysconfig.get_config_var('CC')
if cpp_version is None:
    cpp_version = "Unknown"

# Define the compilation command
compile_command = ["g++", "-o", "AIOT", "main.cpp"]

# Start the compilation process and capture the output
with subprocess.Popen(compile_command, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, universal_newlines=True) as process:
    print(f"AIOT Installer Version: {installer_version}")
    print(f"Installed C++ Compiler Version: {cpp_version}\n")
    print("Compiling main.cpp...\n")
    for line in process.stdout:
        print(line, end='')

# Check the compilation status
if process.returncode == 0:
    print("\nCompilation successful.\n")
    print("Thank you for installing! I hope you'll have fun using my AIOT!\n")

    while True:
        choice = input("Choose an option:\n1. Run the program\n2. Close the installer\n")
        if choice == "1":
            # Run the compiled executable
            print("Running the compiled executable...\n")
            subprocess.run(["./AIOT"], check=True)
            break
        elif choice == "2":
            print("Exiting the installer.")
            break
        else:
            print("Invalid choice. Please enter '1' to run the program or '2' to close the installer.")
else:
    print(f"\nCompilation failed with return code {process.returncode}.\n")
