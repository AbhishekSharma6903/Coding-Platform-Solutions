int xoring(int x)
    {
        if(x % 4 == 1)return 1;
        else if(x % 4 == 2)return x+1;
        else if(x % 4 == 3)return 0;
        else return x;
    }
    int findXOR(int l, int r) {
        return xoring(r)^xoring(l-1);
        // complete the function here
    }
