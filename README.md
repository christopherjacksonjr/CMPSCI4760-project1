# CMP SCI 4760 - Operating Systems Project 1

- Github: https://github.com/cjqn9/CMPSCI4760-project1

---
## :moneybag: Environments

Environment | URL
- Linux | https://www.linux.org/

---
## :briefcase: Contacts

- Developer: Christopher Jackson (cjqn9@mail.umsl.edu)

---
## :money_with_wings: Working with Code

### Spin up

* [Triton VPN](https://www.umsl.edu/technology/networking/TritonVPN/index.html)
* [Delmar - delmar.usml.edu](http://www.umsl.edu/technology/unix/)
* [Hoare - hoare.cs.umsl.edu]()

**If you have the above installed, run these commands in order:**

1. `make`: runs Makefile and creates `ass1` object file to run.
1. `./ass1`: runs program.

### WorkFlow to MASTER

1. Create a new branch off the `master` branch.
1. When you are done with this feature, submit a "Pull Request" into master.
1. When the Pull Request is approved and merged into `master`, the code will be updated.

### Clean up

**Run this command:**
1. `make clean`.

---

## :bento: Technical Overview

Technology | Description
--- | ---
[getopt] | The getopt() function parses the command-line arguments.  Its
        arguments argc and argv are the argument count and array as passed to
        the main() function on program invocation.  An element of argv that
        starts with '-' (and is not exactly "-" or "--") is an option
        element.  The characters of this element (aside from the initial '-')
        are option characters.  If getopt() is called repeatedly, it returns
        successively each of the option characters from each of the option
        elements.
[perror] | The perror() function produces a message on standard error describing
        the last error encountered during a call to a system or library
        function.
[fork]   | fork() creates a new process by duplicating the calling process.  The
        new process is referred to as the child process.  The calling process
        is referred to as the parent process.
[sleep]  | sleep() causes the calling thread to sleep either until the number of
        real-time seconds specified in seconds have elapsed or until a signal
        arrives which is not ignored.
[wait]   | The wait() system call suspends execution of the calling thread until
        one of its children terminates.
[git-log] | Shows the commit logs.

### :lock: Passwords

Account username and password provided by the instructor.

### :rotating_light: Known Issues + Feedback

Known Issues: Had some issued with the isdigit() function making sure that the options with -n was
a valid number. 

Feedback: this project was a good way to get comfortable with version control and making commits. It
was helpful to see the way getopt works with taking command line arguments in versus the traidional
way. Also, seeing how fork is ran by comparing the process ID, parent ID, and child ID. 
The project was not particularly difficult but the instructions were a little confusing to follow at times.
The confusing part of the instructions provided were being asked to modify different snippets of code
but was not instructed on what parts to keep and take out. The way that I interpreted was to keep 
everything but build on top of what was already there but was discussed in class was to start from 
program 3.1 and modify according to what the problem is asking - this could be made more clear in the
instructions to prevent any confusion. For example, when using getopt in the begining of the progect 
for -n, -h, and -p options versus taking command line arguments in exercise 3.8 for the n, k, and m
options. 

---
### :memo: Resources / Documentation

Robbins/Robbins.Unix Systems Programming – Communication, Concurrency, and Threads.Prentice-Hall, 2003.

---
