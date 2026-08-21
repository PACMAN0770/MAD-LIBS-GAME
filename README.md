Mad Libs Generator

A simple command-line Mad Libs game written in C. The program asks the user for a series of words (adjectives, a noun, and a verb) and then inserts them into a short pre-written story for a fun, often silly, result.

Features
Prompts the user for 5 words: 3 adjectives, 1 noun, and 1 verb
Safely handles input strings and newline characters
Generates a short zoo-themed story using the words provided
Requirements
A C compiler (e.g., gcc)
Building
bash
gcc -o madlibs main.c
Running
bash
./madlibs
Example
Enter an adjective (description): funny
Enter a noun (animal or person): monkey
Enter another adjective (description): loud
Enter a verb (ending w/ -ing): dancing
Enter another adjective (description): dizzy

Today I saw a funny zoo.
In an exhibit, I saw a monkey.
monkey was dancing and loud!
I was dizzy!
Notes
Input is limited to 49 characters per word (plus null terminator).
The story template is fixed but can easily be edited or expanded with more prompts and sentences.
