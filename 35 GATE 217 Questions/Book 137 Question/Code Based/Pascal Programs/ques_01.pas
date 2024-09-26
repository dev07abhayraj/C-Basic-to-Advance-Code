var 
  x, y : integer;

procedure P(n : integer);
begin
  x := (n + 2) div (n - 3);  // using 'div' for integer division
end;

procedure Q;
var 
  x, y : integer;
begin
  x := 3;
  y := 4;
  P(y);
  Write(x);  // Local x is written here
end;

begin
  x := 7;
  y := 8;
  Q;
  Write(x);  // Global x is written here
end.