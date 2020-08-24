#import winsound
import RPi.GPIO as GPIO
import time
import random

class Time:
    Dot = 0.1
    Dash = 3*Dot
    DtD = Dot
    Letter = 3*Dot - DtD

mtime = Time()

code  = {
    #大写英文字母
    'A': ".-",
    'B': "-...",
    'C': "-.-.",
    'D': "-..",
    'E': ".",
    'F': "..-.",
    'G': "--.",
    'H': "....",
    "I": "..",
    "J": ".---",
    'K': "-.-",
    'L': "..-.",
    'M': "--",
    'N': "-.",
    'O': "---",
    'P': ".--.",
    'Q': "--.-",
    'R': ".-.",
    'S': "...",
    'T': "-",
    'U': "..-",
    'V': "...-",
    'W': ".--",
    'X': "-..-",
    'Y': "-.--",
    'Z': "--..",
    #小写英文字母
    'a': ".-",
    'b': "-...",
    'c': "-.-.",
    'd': "-..",
    'e': ".",
    'f': "..-.",
    'g': "--.",
    'h': "....",
    "i": "..",
    "j": ".---",
    'k': "-.-",
    'l': "..-.",
    'm': "--",
    'n': "-.",
    'o': "---",
    'p': ".--.",
    'q': "--.-",
    'r': ".-.",
    's': "...",
    't': "-",
    'u': "..-",
    'v': "...-",
    'w': ".--",
    'x': "-..-",
    'y': "-.--",
    'z': "--..",
    #字母字符
    '0': "-----",
    '1': ".----", 
    '2': "..---", 
    '3': "...--", 
    '4': "....-",
    '5': ".....", 
    '6': "-....",
    '7': "--...",
    '8': "---..",
    '9': "-----"
}



GPIO.setmode(GPIO.BOARD)

GPIO.setup(11, GPIO.OUT)
GPIO.setup(12, GPIO.OUT)
GPIO.setup(13, GPIO.OUT)
GPIO.output(11, GPIO.LOW)
GPIO.output(11, GPIO.LOW)
GPIO.output(13, GPIO.LOW)

str = input("请输入一串字符：")
for i in str:
    j = code[i]
    n= random.randint(11, 13)
    for i in j:
        if i == "-":
            ##winsound.Beep(1000, int(mtime.Dash*1000))
            GPIO.output(n, GPIO.HIGH)
            time.sleep(mtime.Dash)
        else:
            ##winsound.Beep(1000, int(mtime.Dot*1000))
            GPIO.output(n, GPIO.HIGH)
            time.sleep(mtime.Dot)
        GPIO.output(n, GPIO.LOW)
        time.sleep(mtime.DtD)
    time.sleep(mtime.Letter)



