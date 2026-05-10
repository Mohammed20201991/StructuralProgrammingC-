# File Types in C++

In C++, files are mainly divided into two types:

| Type         | Description                             |
| ------------ | --------------------------------------- |
| Text Files   | Store data as readable text             |
| Binary Files | Store data in binary format (0s and 1s) |


## 1. Text Files

Text files store data in human-readable form.

Examples:

* `.txt`
* `.csv`
* `.log`

### Example

```
#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream file("data.txt");

    file << "Ali 90";

    file.close();

    return 0;
}
```

The file content can be opened and read using Notepad.

## Advantages of Text Files

* Easy to read
* Easy to edit

## Disadvantages

* Larger file size
* Slower than binary files

## 2. Binary Files

Binary files store raw bytes.

Examples:

* `.dat`
* `.bin`

### Example

```cpp 
#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int id;
    char name[20];
};

int main() {

    Student s = {1, "Ali"};

    ofstream file("student.dat", ios::binary);

    file.write((char*)&s, sizeof(s));

    file.close();

    return 0;
}
```

## Reading Binary File

```cpp 
#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int id;
    char name[20];
};

int main() {

    Student s;

    ifstream file("student.dat", ios::binary);

    file.read((char*)&s, sizeof(s));

    cout << s.id << " " << s.name;

    file.close();

    return 0;
}
```

## Advantages of Binary Files

* Faster
* Smaller size
* Efficient for structures and objects

## Disadvantages

* Not human-readable
* Harder to edit manually


### Common File Extensions

| Extension | Type             |
| --------- | ---------------- |
| `.txt`    | Text file        |
| `.csv`    | Spreadsheet text |
| `.dat`    | Binary data      |
| `.bin`    | Binary file      |
| `.log`    | Log file         |



### File Modes for Types

| Mode          | Purpose             |
| ------------- | ------------------- |
| `ios::text`   | Text mode (default) |
| `ios::binary` | Binary mode         |

---

### Simple Comparison

| Feature        | Text File | Binary File |
| -------------- | --------- | ----------- |
| Human readable | Yes       | No          |
| Speed          | Slower    | Faster      |
| Size           | Larger    | Smaller     |
| Easy to debug  | Yes       | No          |
