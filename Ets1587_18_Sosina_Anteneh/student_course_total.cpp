TASK 1: STUDENT COURSE TOTAL

1. Problem Analysis

1.1 Input

- Assignment mark
- Midterm mark
- Final examination mark

1.2 Output

- Course total
- Student result (Pass or Fail)

1.3 Process

1. Read the assignment, midterm and final examination marks.
2. Multiply the assignment mark by 0.20.
3. Multiply the midterm mark by 0.30.
4. Multiply the final examination mark by 0.50.
5. Add the three weighted marks to obtain the course total.
6. Use the conditional operator to determine whether the student passes or fails.
7. Display the course total and the student's result.

1.4 Formula

Course Total = (Assignment × 0.20) + (Midterm × 0.30) + (Final × 0.50)

If Course Total ≥ 50, Result = Pass; otherwise, Result = Fail.

2. Variables

Variable  | Data type| Purpose
assignment| double   | Stores assignment mark
midterm   | double   | Stores midterm mark
finalExam | double| Stores final examination mark
total     | double| Stores calculated course total
result| string| TASK 1: STUDENT COURSE TOTAL

1. Problem Analysis

1.1 Input

- Assignment mark
- Midterm mark
- Final examination mark

1.2 Output

- Course total
- Student result (Pass or Fail)

1.3 Process

1. Read the assignment, midterm and final examination marks.
2. Multiply the assignment mark by 0.20.
3. Multiply the midterm mark by 0.30.
4. Multiply the final examination mark by 0.50.
5. Add the three weighted marks to obtain the course total.
6. Use the conditional operator to determine whether the student passes or fails.
7. Display the course total and the student's result.

1.4 Formula

Course Total = (Assignment × 0.20) + (Midterm × 0.30) + (Final × 0.50)

If Course Total ≥ 50, Result = Pass; otherwise, Result = Fail.

2. Variables

Variable   | Data type| Purpose
assignment | double    | Stores assignment mark
midterm    | double    | Stores midterm mark
finalExam  | double    | Stores final examination mark
total      | double    | Stores calculated course total
result     | string    | Stores Pass or Fail

3. C++ Code

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    double assignment, midterm, finalExam, total;
    string result;

    cout << "Enter assignment mark: ";
    cin >> assignment;

    cout << "Enter midterm mark: ";
    cin >> midterm;

    cout << "Enter final exam mark: ";
    cin >> finalExam;

    total = (assignment * 0.20) +
            (midterm * 0.30) +
            (finalExam * 0.50);

    result = (total >= 50) ? "Pass" : "Fail";

    cout << fixed << setprecision(2);

    cout << "Course Total = " << total << endl;
    cout << "Result = " << result << endl;

    return 0;
}
