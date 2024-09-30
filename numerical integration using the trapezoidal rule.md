
: main
VARIABLE n
VARIABLE i
VARIABLE x
VARIABLE y
VARIABLE a
VARIABLE b
VARIABLE h
VARIABLE k
VARIABLE inte
VARIABLE s
20 CONSTANT max
CR ." enter lower limit,upper limit and no.of sub intervals"
CR
accept a
accept b
accept n
h = (b-a)/n
x[0] = a
y[0] = 1/(1+x[0]^2)
CR ." x y"
CR
1 i !
max n @ > WHILE
i @ 1- n @ < WHILE
i @ x + @ f@
i @ 1- n @ < WHILE
i @ 1+ i !
max n @ > WHILE
i @ 1- n @ < WHILE
i @ x + @ f@
i @ 1- n @ < WHILE
i @ 1+ i !
max n @ > WHILE
s=0
i @ 1- n @ < WHILE
i @ y + @ s +!
i @ 1+ i !
max n @ > WHILE
inte = h*(y[0]+y[n]+2*s)/2
CR
CR ." value of integral is " inte f@ .
CR CR

