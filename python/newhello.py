#print hello world in python
import sys
from termcolor import colored, cprint
text= colored('Hello World...!', 'green',attrs=[ 'blink'])
print(text) 
cprint('This is my first python programmme!', 'yellow')
