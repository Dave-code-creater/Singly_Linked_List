#!/bin/bash

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
