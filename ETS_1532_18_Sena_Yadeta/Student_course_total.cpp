/*
1. Problem description
Write a C++ program that reads a student's assignment, midterm and final marks (each out of 100). The course total is 20% assignment + 30% midterm + 50% final. The pass mark is 50. Print the total (one decimal place) and the word Pass or Fail. Use the conditional operator (no if).

2. Problem analysis
2.1 Input: assignment mark, midterm mark, final mark
2.2 Output: course total, pass/fail status

3. Process (operations)
1. Declare variables to hold the marks, total, and status.
2. Define fixed values (weights and pass mark) as constants.
3. Print a prompt and read the three inputs.
4. Calculate the course total by multiplying each mark by its weight and adding them.
5. Decide the status: "Pass" if the total is greater than or equal to 50, otherwise "Fail" (using ?:).
6. Print the total with one decimal place and the status.

4. Design the program
4.1 Variables: what and how?

| Variable    | Type   | Why this type             |
|-------------|--------|---------------------------|
| assignment  | double | Marks may have decimals.  |
| midterm     | double | Marks may have decimals.  |
| finalMark   | double | Marks may have decimals.  |
| courseTotal | double | Result of decimal math.   |
| status      | string | To hold "Pass" or "Fail". |

4.2 Constants
const double ASSIGNMENT_WEIGHT = 0.20;
const double MIDTERM_WEIGHT = 0.30;
const double FINAL_WEIGHT = 0.50;
const double PASS_MARK = 50.0;

4.3 Reading the input
cout << "Enter assignment, midterm, and final marks: ";
cin >> assignment >> midterm >> finalMark;

4.4 Calculation
courseTotal = (assignment * ASSIGNMENT_WEIGHT) + 
              (midterm * MIDTERM_WEIGHT) + 
              (finalMark * FINAL_WEIGHT);
status = (courseTotal >= PASS_MARK) ? "Pass" : "Fail";

4.5 Printing the result
cout << fixed << setprecision(1);
cout << "Total: " << courseTotal << endl;
cout << "Status: " << status << endl;
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // 4.1 and 4.2: Variables and Constants
    double assignment, midterm, finalMark, courseTotal;
    string status;
    const double ASSIGNMENT_WEIGHT = 0.20;
    const double MIDTERM_WEIGHT = 0.30;
    const double FINAL_WEIGHT = 0.50;
    const double PASS_MARK = 50.0;

    // 4.3: Read input
    cout << "Enter assignment, midterm, and final marks: ";
    cin >> assignment >> midterm >> finalMark;

    // 4.4: Calculate
    courseTotal = (assignment * ASSIGNMENT_WEIGHT) + 
                  (midterm * MIDTERM_WEIGHT) + 
                  (finalMark * FINAL_WEIGHT);
                  
    status = (courseTotal >= PASS_MARK) ? "Pass" : "Fail";

    // 4.5: Print result
    cout << fixed << setprecision(1);
    cout << "Total: " << courseTotal << endl;
    cout << "Status: " << status << endl;

    return 0;
}
