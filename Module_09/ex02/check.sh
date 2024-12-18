#!/bin/bash

# Check if a list of numbers is sorted in ascending order

# Function to check sorted order
check_sorted() {
    prev=-999999999  # Initialize to a very small value
    while read -r num; do
	echo $num " "
        if [[ $num -lt $prev ]]; then
            echo "Not sorted"
            exit 1
        fi
        prev=$num
    done
    echo "Sorted"
}

# Generate random numbers and store them in a variable
f=$(jot -r 5 1 10)  # Generate 30 random numbers between 1 and 1,000,000

# # Print the generated numbers
# echo "Generated numbers:"
# echo "$f"

# Run the program with the random numbers and check if sorted
./PmergeMe $f | check_sorted
