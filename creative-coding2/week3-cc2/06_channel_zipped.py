import re, os, zipfile

nothing = 90052
comments = []

def iterate_zip(x, y):

    cur_path = os.path.dirname(__file__)
    folder = "channel.zip"
    pathtofolder = os.path.join(cur_path, folder)

    file_extns = '{}.txt'

    f = zipfile.ZipFile(pathtofolder, "r")

    content = f.read(file_extns.format(x))
    y.append(f.getinfo(file_extns.format(x)).comment.decode('utf-8'))

    content = str(content)
    match = re.findall(r"([0-9])", content)    
    match = "".join(match)

    if match:
               
        print("               ")
        print("               ")
        x = str(x)
        print("The current nothing is " + x)
        print(comments)
        print(match)
        print(''.join(y))
        print("               ")
        print("               ")
        
        return iterate_zip(match, y)
    else:
        print("\n ALT\n")
        nextNothing = (''.join(str(x) for x in match))
        
        print(nextNothing)
        print(comments)
        print(match)
        print(x)
        print(''.join(y))
 
iterate_zip(nothing, comments)

#http://www.pythonchallenge.com/pc/def/oxygen.html