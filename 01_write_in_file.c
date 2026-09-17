/*FILE is build in file type  in c and *fp is a pointer. it point to the file that wu gonna
use continuously.
*/
// fopen() use to open the file. 
//syntax - fp = fopen("filename", "mode");
/* so there are 6 modes in file.
1."r" - read
2. "w" - write(delete all previous data from file, so be careful)
3."a" - append(store the data & add the new data but couldn't delete the previous data)
4."r+" - read + write
5."w+" - write + read
6."a+" - append + read
*/
// here is a basic structure of how to write in a file
//*** remember when you open the file you need to must close the file*****
#include <stdio.h>
int main() {
    FILE *file;
    file = fopen("file.txt", "w"); // file.txt i our file where we store our data
    fprintf(file, "Hello, File Handling!");
    fclose(file); // close the file when the work on file is done
    return 0;
}
