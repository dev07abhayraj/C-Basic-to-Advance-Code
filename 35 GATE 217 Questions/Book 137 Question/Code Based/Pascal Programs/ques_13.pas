// ---------------------------------- 1st Program -------------------------------------------------

program COMPUTE(input,output);

var X:integer;

procedure FIND(X:real);
begin 
    X:= sqrt(X);
end;

begin 
    X:=2;
    FIND(X);
    writeln(X);
end. 

Output : 2


// ---------------------------------- SECOND Program -------------------------------------------------

// // Another example

// program COMPUTE(input,output);

// var X:integer;

// procedure FIND(X:real);
// begin 
//     X:= sqrt(X);
// end;

// begin 
//     X:=16;
//     FIND(X);
//     writeln(X);
// end. 


// // Output : 16


// ---------------------------------- 3rd Program -------------------------------------------------


// // Another example with modifications

// program COMPUTE(input,output);

// var X:integer;

// procedure FIND(X:real);
// begin 
//     X:= sqrt(X);
//     writeln(X);
// end;

// begin 
//     X:=16;
//     FIND(X);
//     // writeln(X);
// end. 


// // Output : 4.0000000000000000E+000



// NOTE : Remove comment of second & third program and comment out 1st Program to see the output of 2nd and 3rd