import java.util.*;

class Numbers
{
   int iMult = 1;
    public int CommonFactorsDisplay(int iNo1)
    {
        int iCnt = 0;

        for(iCnt = 1; (iCnt <= iNo1/2); iCnt++)
        {
            if((iNo1 % iCnt) == 0)
            {
                iMult = iMult * iCnt;
            }
        }
        return iMult;
    }
}

class Program255
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter number : ");
        int iNo = sobj.nextInt();

        Numbers nobj = new Numbers();

        int iRet = nobj.CommonFactorsDisplay(iNo);

        System.out.println("Multiplication of factors are : "+iRet);

    }
}