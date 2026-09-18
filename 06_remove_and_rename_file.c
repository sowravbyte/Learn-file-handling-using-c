// general structure------
/*
original.txt
      ↓
read data
      ↓
temp.txt
      ↓
remove(original.txt)
      ↓
rename(temp.txt, original.txt)
  */

//******remove() and rename() explanation****

/*
remove() is used to delete a file.
syntax: 
remove("filename");
rename() is used to change a file name.
 syntax: 
rename("old_name", "new_name");
 Example: 
 rename("temp.txt", "file.txt");
 In real projects, remove() and rename() are mostly used 
 to update or delete data from a file.
 
 Process:

original file -> read data 
      ↓ 
  temp file 
      ↓ 
 remove(original file) 
       ↓ 
 rename(temp file, original file)
*/




