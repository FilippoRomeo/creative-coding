import shutil
import tempfile
import requests
import re

url_py_challange = 'http://www.pythonchallenge.com/pc/def/linkedlist.php?nothing={nothing}'

nothing = '12345'

def iterationtrulink(x):
    req = requests.get(url_py_challange, params= {"nothing": x})

    match = re.findall(r"([0-9])", req.text)
    if match:
        nextNothing = (''.join(str(x) for x in match))
        
        print("               ")
        print("               ")
        print("The current nothing is " + x)
        print(req.text)
        #print("nextNothing " + nextNothing)
        print("               ")
        print("               ")
        

        x = nextNothing
        return iterationtrulink(x)
    
    else:
        print("\n ALT\n")
        nextNothing = (''.join(str(x) for x in match))
        
        print (nextNothing)
        print(req.text)
        print(x)
        
        print("               ")
        print("               ")
        print("               ")

        print("***************")
        print("***************")
        print("               ")
        print("               ")

        print("Do you want to: ")
        print("               ")
        print("Type 1 --> Divide by two and continue  ")
        print("Type any char --> Stop")

        print("               ")
        print("               ")
        print("***************")
        print("***************")

        print("               ")
        val = input("Type in, come on we got requestss to make!: ")
        print("               ")

        def zero (x):
            
            x = int(x)
            x = x/2
            x = int(x)
            x = str(x)
            print(x)
            return iterationtrulink(x)

        if val == "1":
            zero(x)
        else:
            print("Ok")
            i = 0
            while i < 10 :

                print("***************")
                print("Ok that was it.")
                i += 1

            

        
        

iterationtrulink(nothing)
