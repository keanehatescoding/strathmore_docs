#!/bin/fish

# List files and save to tmp.txt
ls >tmp.txt

# Initialize a counter
set a 1

# Get the total number of files
set total $(wc -l <tmp.txt)

# Loop through the file list
for x in (seq total)
  # Get the file name from tmp.txt
  set file $(sed -n $a tmp.txt)

    # Check if the file size is less than 256 bytes
    if test $(stat -c%s "$file") -lt 256 ]
      # Remove the file if it's smaller than 256 bytes
      rm $file
      # Increment the counter
      set a "$(math $a + 1)"
    end

  end

