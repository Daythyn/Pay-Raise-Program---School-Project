"# Pay-Raise-Program---School-Project" 
Written in C++ using Dev-C++ 5.11
Daythyn Price
9/25/2022

Objective:
  The purpose of this code is to calculate pay raises for multiple employees listed in a text file. 

Formatting:
  The data will be pulled from a file named "Input.txt", and the expected format is the following:
  LastName FirstName Wage Raise

  Example:
  Smith John 30500.56 5.5

  Each employee entree will take up one line in the file.

Method:
  The LastName will be saved as a string lastn.
  The FirstName will be saved as a string firstn.
  The Wage will be saved as a double wage.
  The Raise will be saved as a double pInc.

  The program will run a loop that pulls enough data for one employee, and uses the assignment as a loop control.
  The Raise will be converted into a proper percent increase (pInc) and applied to the wage.
  The program will then push the First and Last names with the updated wage on a single line per employee in the output file.
  The loop ends when the assignment enters a failure state from a lack of data at the end of the file.

  Example:
  John Smith 32178.09

Results:
  Input:
    Miller Andrew 65789.87 5
    Green Sheila 75892.56 6
    Sethi Amit 74900.50 6.1

  Output:
    Andrew Miller     69079.36
    Sheila Green     80446.11
    Amit Sethi     79469.43

Conclusion:
  The program can process an unlimited amount of employee pay raises if the data is properly formatted.
  Possible improvements include:
   - A way to see an employee’s wage history
   - A way to see the total increase in expenditure from wages
   - A way to output the data into an excel sheet

  I was able to learn how to read and write data from files.
  I was also able to learn that assignment can be used to control while loops.
