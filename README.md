Description

This is a simple C++ console application that checks whether two given strings are anagrams of each other.
An anagram is a word or phrase formed by rearranging the letters of another word or phrase, ignoring spaces and case.

Example:

"listen" and "silent" → Anagrams ✅

"hello" and "world" → Not anagrams ❌

Features

Accepts two strings as input.

Ignores case (capital or lowercase letters).

Ignores spaces and punctuation.

Displays whether the strings are anagrams or not.

Optional: can be extended to check multiple pairs in a single run.

Requirements

C++ compiler (GCC, Clang, or MSVC)

Windows, Linux, or macOS terminal

Basic knowledge of compiling and running C++ programs

How to Compile and Run
Using Command Line (Windows)

Open terminal in the project folder.

Compile the code:

g++ -o anagram_checker anagram_checker.cpp


Run the program:

./anagram_checker

Using Linux or macOS
g++ -o anagram_checker anagram_checker.cpp
./anagram_checker

Usage

Enter the first word or phrase when prompted.

Enter the second word or phrase.

The program will output:

The strings are anagrams.


or

The strings are not anagrams.

Example
Enter first string: listen
Enter second string: silent
Output: The strings are anagrams.

Enter first string: hello
Enter second string: world
Output: The strings are not anagrams.

Future Improvements

Add support for full sentences including punctuation.

Add a graphical interface (GUI).

Extend to find all anagrams in a list of words.
