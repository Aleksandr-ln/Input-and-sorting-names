# Sorting Names

## Overview
This C++ program allows users to input multiple names and then sorts them in **alphabetical order**. The sorting is implemented using a **selection sort algorithm**.

## Features
- Accepts user input for a list of names.
- Uses **selection sort** to order the names from **A to Z**.
- Outputs the sorted names to the console.

## How It Works
1. The user specifies the number of names to input.
2. Names are stored in a dynamically allocated array.
3. The `sortingNamesAtoZ` function sorts the names alphabetically.
4. The sorted names are displayed to the user.
5. The program deallocates memory before exiting.

## Code Structure
- **`sortingNamesAtoZ(int numberOfNames, std::string *name)`**: Implements selection sort to arrange names in ascending order.
- **`main()`**:
  - Asks the user for the number of names.
  - Takes name inputs.
  - Calls the sorting function.
  - Displays the sorted names.
  - Releases allocated memory.

## How to Run
1. **Compile the program** using a C++ compiler:
   ```sh
   g++ -o sorting_names sorting_names.cpp
   ```
2. **Run the executable**:
   ```sh
   ./sorting_names
   ```
3. Follow the prompts to enter names and view the sorted output.

## Future Improvements
- Implement case-insensitive sorting.
- Support for names with spaces.
- Allow sorting in reverse (Z to A) order.

## License
This project is open-source and can be used freely.

---
**Author:** Oleksandr Onupko
