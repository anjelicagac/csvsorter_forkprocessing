# IMDB Sorter - Fork Processing
This Readme file contains instructions and design analysis for “Mergesort.c” and “Sorter.c”. Testing these functions will require a type of .csv file as standard input as well as an .h file. 

GCC COMMAND: 
gcc Sorter.c MergeSort.c -o Sorter


# Instructions

The provided .csv files in the attachment are needed to run Sorter and Mergesort. Similar files with the same column headings will be able to run on this program, however, they must be exact according to the structure built. The column headings must be in the same order as the attached .csv files due to the “record” structure that is used to sort the input, otherwise the wrong column name given will gracefully fail. 

The column header will be used to denote the 28 different types of struct data per record (line). For example, our test1.csv file contains 28 column headings such as “color, director_name, genres, and budget”. To see the complete “record” structure, please view the Sorter.h file. The structure specifies what type each column is called in as (either char * or int types).

The programs are ran and read through standard input and will be outputted as a new CSV file to STDOUT and the additional STDOUT will specify the initial PID, PIDs of the children processes, and total number of processes. 

The four possible types of user input will be shown below:
1. ./Sorter -c (columnname)  
2. ./Sorter -c (columnname) -d (directory name to start finding files)
3. ./Sorter -c (columnname) -d (directory name to start finding files) -o (output directory name to put sorted files)
4. ./Sorter -c (columnname) -o (output directory name to put sorted files)


# Structure and Algorithm

The program first goes in to Sorter.c as the primary program that implements the input into the record struct. From there, it goes through loops of functions that direct where the path goes to sort which files. Doing this required to pass through parameters such as directory paths and the CSV file being currently handled. Then it calls methods from the Mergesort.c file where the struct is printed out as a new .csv file and sorted lexicographicly (ascending) according to the parameter called after “-c”. One function prototype in Sorter.c, “char * trimWhiteSpace()”, is used to edit the input read for each column type in order remove extra blank characters in the beginning and end of the string. 

Mergesort contains 29 functions. “divide()” is the primary function that performs the mergesort data algorithm with runtime O(n logn). This recursive function calls the rest of the 28 functions according to the sorting parameter specified in argv[2]. The 28 functions then, go through a sorting algorithm and is printed out afterwards. Runtime for printing out the sorted records would be O(n). The program will check if any of the sorted data have the correct column header, otherwise, it will not sort accordingly. 


# Design Process

The difficulty for the project came down to the fork and wait algorithm. Another challenge was knowing how to use the <dirent.h> for directing what path to go to and creating output directories.
The main challenge was forking processes and knowing exactly where to do it. If you don't know what fork and wait return, a lot of the time our code would freeze. 
Utilizing the fork and wait statuses was our key to understanding how many processes to wait.
