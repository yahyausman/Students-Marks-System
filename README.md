# Student Marks System in C++

## Description  
This program stores student information, calculates their percentage based on obtained marks, assigns a grade, and displays their details. It also calculates students' ages based on their birth year.

## Features  
- Stores student data (Roll No, Name, Birth Year, Marks)
- Calculates student age dynamically
- Computes percentage and assigns grades
- Displays student records in a structured format

## How It Works  
1. The program initializes student data arrays.
2. It calculates age using the current year (2025).
3. The percentage is computed based on a total of 1000 marks.
4. Grades are assigned based on percentage:
   - A: 90% and above
   - B: 80% - 89%
   - C: 70% - 79%
   - D: 60% - 69%
   - F: Below 60%
5. The student details are displayed.

## Technologies Used  
- C++ (Standard Library)

## Usage  
To run the program, compile it using a C++ compiler:

```bash
g++ Student_Marks_System2.cpp -o student_marks
./student_marks
