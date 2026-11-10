/*
Task 1: Student course total

(a) Inputs and outputs
Inputs: assignment mark, midterm mark, final mark (each out of 100)
Outputs: course total (one decimal place), Pass or Fail

(b) Process
1. Read the assignment, midterm and final marks.
2. total = 0.20 * assignment + 0.30 * midterm + 0.50 * final
3. result = (total >= 50) ? "Pass" : "Fail"
4. Print the total with one decimal place and the result.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double W_ASSIGN = 0.20, W_MID = 0.30, W_FINAL = 0.50;
    const double PASS_MARK = 50.0;
    double assignment, midterm, finalExam;

    cout << "Enter assignment, midterm and final marks: ";
    cin >> assignment >> midterm >> finalExam;

    double total = W_ASSIGN * assignment + W_MID * midterm + W_FINAL * finalExam;
    const char* result = (total >= PASS_MARK) ? "Pass" : "Fail";

    cout << fixed << setprecision(1);
    cout << "Total: " << total << endl;
    cout << "Result: " << result << endl;
    return 0;
}