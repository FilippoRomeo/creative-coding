# shift alphabet of two letters

def cipher(n, string):  # n = number letter shifted
    decr_word = ""
    for letters in string:
        x = ord(letters)
        if x == 32:
            decr_word += " "
        y = x + n
        if y > 122:
            manylett = y - 122
            y = 96 + manylett
            decr_word += chr(y)
        else:
            y = x + n
            decr_word += chr(y)
    return decr_word

text = "map"

x = cipher(2, text)
print(x)
#bit buggy 
#not work for special char. upper, numbers