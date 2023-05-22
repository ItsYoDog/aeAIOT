#!/bin/bash

# Delete the 'main' file in the current folder
find . -maxdepth 1 -type f -name "run" -delete

# Delete all files with the .kate-swp extension in the current folder
find . -maxdepth 1 -type f -name "*.kate-swp" -delete

# Delete the .vscode folder and its contents
rm -rf .vscode

echo "Cleanup completed."
