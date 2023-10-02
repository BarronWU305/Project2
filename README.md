# CSCI 208 Bank Account List

## Description:
Write a program that reads a file of bank accounts then reports the accounts **in reverse of the order** you received them.  Your program will ask the user for the name of the file then read that file to build an array of bank accounts.  Each bank account must contain a `string` field for *first name*, a `string` field for *last name*, a `double` field for *amount*, and a, `int` field for account number.  You will print out the account information after you read all the data, from an *array* in a specific format, described below.

*The program must be object oriented* in the sense that you will have a class representing each account that will allow you to store, update, all of those fields for the bank account based on the file input.  The format for thin input file is very specific and is described below.  Please provide at least one example of an input file that differs from my example here.  I will also have test cases, but you can be sure there will be fewer than 100 accounts overall. 

You *will* have to break your program into separate source files, including a separate header and body source file for your team class, where the header will contain the definition of the class and the body source file will contain it's implementation.  The source code for your main program will be in a separate file.  You must also include a `Makefile`.

**Do not** include binary object files or your binary executable in the repository.


## How and What to Submit
Submission will happen via this GitHub respository.  So you'll need to make sure you *add* all necessary files , and you will also need to make sure your code is committed and pushed to GitHub *before* the submission due date.  There's no need to do anything in BlackBoard other than accept the initial invitation link.

Here are the files that should be present in your repository:
* Any necessary C++ source files
* A *Makefile* that builds your program
* At least one input file in the format described below, but different from that example
* Any special instructions for running your program (if needed).

**Do not** include object files, your binary executable, or your IDE's configuration files in the repository.

## Input File Format

Each line of the input file will contain all pieces of field information.  For this assignment, assume that names do not contain white space, so there will be precisely four fields on each line:

* Last name
* First name
* Amount
* Account number

For example, suppose you have a file called `input-eg1.txt` containing the following text:

```
Whitaker Jodie 1000.01 21718
Baker Tom 2001.27 31415
Eccelston Christopher 17012.32 16180
Tennant David 10.10 14142
```

## Output Format
Each line of output will also contain all the fields, but they will be formatted in a better way and will be in reverse order.  The first name will come first, then the last name, then the account number in parentheses, followed by the amount.  Prefix the amount by a dollar sign and make sure that amounts line up in a column.  For example, the file above should produce the output shown below.
```
David Tennant (14142):         $10.10 
Christopher Eccelston (16180)  $17012.32 
Tom Baker (31415)              $2001.27 
Jodie Whitaker (21718)         $1000.01 
```


## Late Policy
Programming Projects must be turned in on time to receive full credit.  There is a late submission policy, but it depends on the student doing two things:  
1.  Completing a code-review session with me *prior* to the day the project is due;
2.  Attending *every* lab session during the time period in which the assignment is tardy.

Failure to complete *either* of those two steps will result in a zero on the tardy programming assignment.  Assuming the student meets those conditions, the late policy is as follows:
* Projects submitted within the first two days after the due date are penalized -15%,
* Projects submitted after that but within the first week are penalized -30%,
* Projects submitted after that are penalized -60%.

**NOTE:** All work must be submitted prior to the last day of classes to be graded.


## Do Your Own Coding
To be clear:  You are responsible for implementing this. You *cannot* coordinate or communicate with others, copy code off the Internet, or use an AI tool. This is *your own* work. Copying source code without permission and acknowledgement, includng the use of AIs, is considered *plagiarism*.
