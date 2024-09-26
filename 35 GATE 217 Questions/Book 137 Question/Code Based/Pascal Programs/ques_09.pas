{  this is a multi line comment to comment this program 

// Question no. 09 

var a,b:integer;

begin
    a:=a+b;
    b:=a-b;
    a:=a-b;
end.

}

//  this program is written to understand the concept

var a,b:integer;

begin
    a:=1;
    b:=2;

    writeln('value of a is ',a);
    writeln('value of b is ',b);

    a:=a+b;
    b:=a-b;
    a:=a-b;

    writeln('value of a is ',a);
    writeln('value of b is ',b);
    writeln('Both numbers are exchanged a with b and b with a');
end.

//  Output : 

{

value of a is 1
value of b is 2
value of a is 2
value of b is 1
Both numbers are exchanged a with b and b with a

}