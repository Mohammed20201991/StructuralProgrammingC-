## 1. CSV File Example (`.csv`)

CSV stands for **Comma-Separated Values**.
- Used for tables and spreadsheet data.

- Example content of `students.csv`:

```
ID,Name,Grade
1,Ali,90
2,Sara,85
```

### C++ Program to Write CSV File

```
#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream file("students.csv");

    file << "ID,Name,Grade\n";
    file << "1,Ali,90\n";
    file << "2,Sara,85\n";
    file << "3,Omar,88\n";

    file.close();

    cout << "CSV file created.";

    return 0;
}
```

### Output File (`students.csv`)

```
ID,Name,Grade
1,Ali,90
2,Sara,85
3,Omar,88
```

This file can be opened in:

* Microsoft Excel
* Google Sheets
* Notepad

## 2. LOG File Example (`.log`)

- A log file stores events or program activity.

Example:

* Login records
* Errors
* System activity


### C++ Program to Write Log File

```
#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream logFile("system.log", ios::app);

    logFile << "Program started\n";
    logFile << "User logged in\n";
    logFile << "Program ended\n";

    logFile.close();

    cout << "Log saved.";

    return 0;
}
```


## Why `ios::app`?

`ios::app`
- Adds new log messages without deleting old logs.

### Example Content of `system.log`

```
Program started
User logged in
Program ended
```

If the program runs again, new lines are added to the file.

### Simple Real-Life Uses

| File Type | Usage                            |
| --------- | -------------------------------- |
| `.csv`    | Student grades, employee data    |
| `.log`    | Error tracking, activity records |
