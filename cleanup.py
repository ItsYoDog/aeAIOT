import os
import glob
import shutil

# Delete the 'run' file in the current folder
run_files = glob.glob('./run')
for file in run_files:
    os.remove(file)

# Delete all files with the .kate-swp extension in the current folder
kate_swp_files = glob.glob('./*.kate-swp')
for file in kate_swp_files:
    os.remove(file)

# Delete the .vscode folder and its contents
if os.path.exists('.vscode'):
    shutil.rmtree('.vscode')

print("Cleanup completed.")
