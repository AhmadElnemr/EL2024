#Write a python program to access environment variables.

'''
1- An environment variable is a variable that is created by the Operating System.
2- Environment variables are created in the form of Key-Value pairs.
3- To Access environment variables in Python we can use the OS module which provides a property called environ that contains environment variables in key-value pairs.

'''
import os

print(os.environ)
print("\n")
print(os.getenv('PATH'))