//Darshan Mistry...

#!/bin/bash
if [[ $EUID -ne 0 ]];
 then
  echo "You must be a root user" 2>&1
  exit 1
else
  echo "User already rooted"
fi
