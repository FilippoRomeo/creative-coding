from collections import Counter
import os

cur_path = os.path.dirname(__file__)
file_name = "text.txt"
new_path = os.path.join(cur_path, file_name)

f = open(new_path)
content = Counter(f.read())
f.close

print(content.most_common())
