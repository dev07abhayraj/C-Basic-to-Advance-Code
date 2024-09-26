---------------------------------------------- Question No. 01 -------------------------------------------------

// Year  : 1987
// Marks : 2

// block structured language

var x, y : integer;

procedure P(n : integer);

begin

    x : = (n + 2) / (n - 3);

end;

procedure Q

var x,y : integer;

begin

    x : = 3;
    y : = 4;
    P(y);
    Write(x); --------------------------------(1)

end;

begin 

    x:= 7;
    y:= 8;
    Q;
    Write(x); --------------------------------(2)

end    


// What will be printed by write statements marked (1) and (2) in the program if variable are statically scoped ?


---------------------------------------------- ANSWER -------------------------------------------------

firstly we identify two function named P and Q 

& last is a main function so when Q is called (write (x))
executed and printed the value 3 then becuase of P(y) function the value is updated by 6 

becuase  x : = (n + 2) / (n - 3);

    here y = n;
    and y = 4 given;
    x : = (4 + 2) / (4 - 3);
    x : = 6 / 1 x : = 1

    So the answer is 3,6 
    Option (a) is correct.