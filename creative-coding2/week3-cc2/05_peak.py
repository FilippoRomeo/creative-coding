from urllib.request import urlopen
import pickle as pickle

url_py_challange = "http://www.pythonchallenge.com/pc/def/banner.p"

req = urlopen(url_py_challange).read()
data = (pickle.load(urlopen(url_py_challange)))

for line in data:
    print("".join([k * v for k, v in line]))