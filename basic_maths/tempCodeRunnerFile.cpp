int GCD;
    if(x > y){
        if(x % y == 0)
        GCD = y;
        else
        GCD = (x % y);
    }
    if(x < y){
        if(y % x == 0)
        GCD = x;
        else
        GCD = (y % x);
    }