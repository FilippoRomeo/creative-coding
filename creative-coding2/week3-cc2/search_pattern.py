import os
import re

cur_path = os.path.dirname(__file__)
file_name = "text2.txt"
new_path = os.path.join(cur_path, file_name)

f = open(new_path)

content = f.read()

f.close

match = re.findall(r"([a-z][A-Z]{3}[a-z]{1}[A-Z]{3}[a-z])", content)
    
print(match)