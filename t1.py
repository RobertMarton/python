from random import randint
x = randint(0,300)
go = 'y'
while(go=='y'):
    print'Please input a number between 0~300:'
    digit=input()
    if digit == x:
        print'Bingo!'
        break
    elif digit>x:
        print'Too large,please try again.'
    else:
        print'Too small,please try again.'
    print'If you do not want to continue,input n,or input y.'
    go=raw_input()
    print go
else:
    print'Goodbye!'