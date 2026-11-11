TASK 1: STUDENT COURSE TOTAL
1. Problem Description
Write a C++ program that reads a student's assignment mark, midterm mark, and final exam mark, each out of 100. The program calculates the student's total course mark using the following weights:

- Assignment: 20%
- Midterm: 30%
- Final Exam: 50%

The passing mark is 50. The program should display the course total to one decimal place and show whether the student passed or failed. Use the conditional operator ("?:") to determine the result without using an "if" statement.

2. Analysis: Input and Output
Input:
1. Assignment mark (out of 100).
2. Midterm mark (out of 100).
3. Final exam mark (out of 100).
Output:
1. Total course mark displayed to one decimal place.
2. Student's result: Pass or Fail.
3. Process
1. Start the program.

2. Declare variables for assignment, midterm, final exam, and total marks.

3. Declare constants for the assignment weight (0.20), midterm weight (0.30), final exam weight (0.50), and passing mark (50).

4. Read the assignment, midterm, and final exam marks from the user.

5. Calculate the total course mark using:

Total = (Assignment × 0.20) + (Midterm × 0.30) + (Final Exam × 0.50)

6. Use the conditional operator to check whether the total is greater than or equal to 50:

   - If true, display "Pass".
   - Otherwise, display "Fail".

7. Display the total mark to one decimal place.

8. End the program.

4. Design
Variables and Data Types:
Variable| Data Type| Purpose
assignment| double| Stores the assignment mark
midterm| double| Stores the midterm mark
finalExam| double| Stores the final exam mark
total| double| Stores the calculated course total

Constants:

Constant| Data Type| Value| Purpose
ASSIGNMENT_WEIGHT| double| 0.20| Assignment weight
MIDTERM_WEIGHT| double| 0.30| Midterm weight
FINAL_WEIGHT| double| 0.50| Final exam weight
PASS_MARK| double| 50.0| Minimum passing mark
Input Statements:
- Read assignment, midterm, and final exam marks using "cin".

Calculation Statement:

total = assignment * ASSIGNMENT_WEIGHT
      + midterm * MIDTERM_WEIGHT
      + finalExam * FINAL_WEIGHT;
Output Statements:
- Use "fixed" and "setprecision(1)" to display the total to one decimal place.
- Use the conditional operator ("?:") to display "Pass" or "Fail".

5. C++ Program
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare variables
    double assignment, midterm, finalExam, total;

    // Declare constants
    const double ASSIGNMENT_WEIGHT = 0.20;
    const double MIDTERM_WEIGHT = 0.30;
    const double FINAL_WEIGHT = 0.50;
    const double PASS_MARK = 50.0;

    // Read input
    cout << "Enter assignment, midterm and final marks: ";
    cin >> assignment >> midterm >> finalExam;

    // Calculate course total
    total = assignment * ASSIGNMENT_WEIGHT
          + midterm * MIDTERM_WEIGHT
          + finalExam * FINAL_WEIGHT;

    // Display output
    cout << fixed << setprecision(1);
    cout << "Course Total: " << total << endl;

    cout << "Result: "
         << ((total >= PASS_MARK) ? "Pass" : "Fail") << endl;

    return 0;
}


6. Test Cases

Test| Assignment| Midterm| Final Exam| Expected Course Total| Expected Result
1| 80| 60| 70| 69.0| Pass
2| 40| 30| 45| 39.5| Fail

Conclusion: The program calculates the weighted course total correctly and uses the conditional operator to determine whether the student passes or fails, without using an "if" statement.
