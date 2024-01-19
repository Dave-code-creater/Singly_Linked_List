#!/bin/bash

# This script checks if the directory "Singly_Linked_List" exists. If it does, it changes the current directory to "Singly_Linked_List".
# If the directory doesn't exist, it clones the repository "https://github.com/Dave-code-creater/Singly_Linked_List.git" and changes the current directory to "Singly_Linked_List".
# It then compiles the code using the "make" command.
# After that, it changes the directory to "build/" and sets the execute permission for the "run.sh" script.
# Finally, it runs the "sll" executable and opens the "sll.txt" file based on the operating system type.

if [ -d "Singly_Linked_List" ]; then
  cd Singly_Linked_List/
else
  git clone https://github.com/Dave-code-creater/Singly_Linked_List.git
  cd Singly_Linked_List/
fi

make

cd build/

chmod +x run.sh

./sll

# Open "sll.txt" file based on the operating system type
if [[ "$OSTYPE" == "linux-gnu"* ]]; then
        vim sll.txt
elif [[ "$OSTYPE" == "darwin"* ]]; then
        open sll.txt
elif [[ "$OSTYPE" == "msys"* || "$OSTYPE" == "cygwin" ]]; then
        start  sll.txt
else
        echo "OS not support"
fi

echo "Program terminated!"
