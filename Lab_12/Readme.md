# C++ Files
The `fstream` library allows us to work with files 
```
#include <iostream>
#include <fstream>
```
The 3 classes included in the `fstream` library
| Class      | Description                                                                     |
| ---------- | ------------------------------------------------------------------------------- |
| `ofstream` | Creates and writes to files                                                     |
| `ifstream` | Reads from files                                                                |
| `fstream`  | A combination of `ofstream` and `ifstream`: creates, reads, and writes to files |

## Creating and Writing to Files in C++

To create a file, use either the `ofstream` or `fstream` class, and specify the name of the file.

To write to the file, use the insertion operator (`<<`).

### Example

```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create and open a text file
    ofstream MyFile("filename.txt");

    // Write to the file
    MyFile << "Files Handling!";

    // Close the file
    MyFile.close();

    return 0;
}
```

| Code                               | Description                          |
| ---------------------------------- | ------------------------------------ |
|  #include <fstream>                | Provides file handling classes       |
|  ofstream MyFile("filename.txt");  | Creates and opens a file for writing |
|  MyFile << "text";                 | Writes text into the file            |
|  MyFile.close();                   | Closes the file                      |

```
#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // Create and open a text file
    ofstream MyFile("filename.txt");

    // Write to the file
    MyFile << "Files Handling!" << endl;

    // Write on second line
    MyFile << "Files Handling22!" << endl;

    // Close the file
    MyFile.close();

    return 0;
}
```
