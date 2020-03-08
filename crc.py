def crc(msg, div, code='000'):
    msg = msg + code
    msg = list(msg)
    div = list(div)
    for i in range(len(msg)-len(code)):
        if msg[i] == '1':
            for j in range(len(div)):
                msg[i+j] = str((int(msg[i+j])+int(div[j]))%2)
    return ''.join(msg[-len(code):])
div = input("ENTER DIVISOR=")
msg = input("ENTER MESSAGE=")
code = crc(msg, div)
print('code:', msg+code)
decode=crc(msg,div,code)
print("remainder at reciever side=",decode)
if decode=='000':
    print("no errors")
else:
    print("error")
