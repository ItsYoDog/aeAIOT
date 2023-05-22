import os
import subprocess

# Compile the main.cpp file
subprocess.run(["g++", "-o", "run", "main.cpp"], check=True)

# Run the compiled executable
subprocess.run(["./run"], check=True)
