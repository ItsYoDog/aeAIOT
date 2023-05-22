#!/bin/bash

# Delete all executables in the current folder
find . -maxdepth 1 -type f -executable -delete

# Delete the .vscode folder and its contents
rm -rf .vscode

echo "Cleanup completed."
