Abhineet Pandey
2017CSB1062
ASSIGNMENT 2

How To Run The Programs:
On Linux Terminal
1. Go to the directory where the .c files are saved.
2. Type command gcc -o filename filename.c. ( Replace filename with the name of the file you want to run)
3. Press Enter.
4. Type ./filename and press enter.


LOGICS:
Q1: We ask the user about number of names he wants to enter, and the maximum length of the name. Depending on that we declare a 2D matrix of characters Then using a loop, we compare the rows, and comparing the ASCII values, it swaps the rows if not in order. Eventually, a loop is used to print the sorted matrix.

Q2: *k acts as a pointer, pointing to the value of iB. So, using call by reference, we make it point to the value of iB which finally reflects in the value of *iA. So we can output the value of iB.

Q3: As per the problem statement, we need to use a function with a pointer argument. So we declare a function. In main, we ask the user about the number of the numbers he wants to get number of factors of. Depending on that value, we run a loop which calls the other function which contains a simple logic for calculation of number of factors of the number given to the function, which returns it in form of pointer.

Q4: The user is asked to enter the number of values he wants to enter, which helps us declare the size of array and further using a loop, random function is used to assign values, with maximum value being 20 and minimum 1 so that repetition can be observed. A loop runs , comparing values of elements in array, and increasing count of a variable whenever the value repeats.The repeated value is assigned value zero so that it does not count again. If the count is greater than 1, that value is printed along with the count. 

Q5:
SPECIAL INSTRUCTION TO RUN:
With the command ./2017csb1062_Q5 put values also,separated by space, eg
./2017csb1062_Q5  3 5 7 9
Logic: We sort the array obtained from command line using bubble sort. We check the array using descending order, so that as soon we come across a prime number we print its value.

Q6:
We use function strlen to get the lengths of the strings input by user. Then we append the the values of the 2 strings into 1 using a loop.


