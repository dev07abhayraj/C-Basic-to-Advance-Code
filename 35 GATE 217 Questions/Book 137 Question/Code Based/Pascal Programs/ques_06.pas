program PARAM(input,output);

var m,n : integer;

procedure P(var x,y:integer);

var m : integer;

begin
    m:=1;
    x:=y+1;
end;

procedure Q(x:integer;var y:integer);
begin
    x:=y+1;
end;

// main function

begin  
    m:= 0;
    P(m,m);
    write(m); 

    n:=0;
    Q(n*1,n);
    write(n);
end.    

// Output :

// 1
// 0

// we can also use writeln(n); to print in a new line like the above code returns 10 but we want to print 
// 1
// 0
// then we can simply replace write to writeln