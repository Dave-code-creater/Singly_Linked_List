#!/bin/bash

git clone https://github.com/Dave-code-creater/Singly_Linked_List.git

make

cd build/

chmod +x run.sh

./sll

file_content=$(<sll.txt)

if [[ "$OSTYPE" == "linux-gnu"* ]]; then
        xdg-open "$file_content"
elif [[ "$OSTYPE" == "darwin"* ]]; then
        open "$file_content"
elif [[ "$OSTYPE" == "msys"* || "$OSTYPE" == "cygwin" ]]; then
        start  "$file_content"
else
        echo "OS not support"
fi

echo "Program terminated!"